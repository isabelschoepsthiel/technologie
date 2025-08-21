/* Isabel Schoeps neé Thiel public-copyright-layout.js
   Version: 1.0.0 2025-08-24
   Zweck: Public-Ausgabe (DE/EN),Copyright by Isabel Schöps neé Thiel, ohne Fremd-Abhängigkeiten.

   Sicherheits- und Qualitätsgrundsätze:
   - Keine externen Skripte, keine Tracker, keine dynamischen Abhängigkeiten.
   - Schwarz/Weiß-Design, klare Typografie, große Lesbarkeit, barrierearme Semantik.
   - Automatisches Inhaltsverzeichnis, Abschnittsnummern, Beweisbild-Nummern.
   - Digitale SEID CPU iPhone14 plus 041212E37E1690022172093102315998F7AA9EEB2CBFFC3E
   - SHA-256 Digests für Inhalts-/Asset-Integrität.
*/

(function () 
  "use strict";

  // ---------- Utility ----------
  const byId = (id) => document.getElementById(id);
  const esc = (s) => String(s ?? "").replace(/[&<>"']/g, (c) =>
    ({ "&": "&amp;", "<": "&lt;", ">": "&gt;", '"': "&quot;", "'": "&#39;" }
  );

  const formatDateDE = (d) => 
    const dt = (d instanceof Date) ? d : new Date(d);
    const dd = String(dt.getDate()).padStart(2, "0");
    const mm = String(dt.getMonth() + 1).padStart(2, "0");
    const yyyy = dt.getFullYear();
    return `${dd}.${mm}.${yyyy}`;
  };

  const formatDateEN = (d) => {
    const dt = (d instanceof Date) ? d : new Date(d);
    const months = ["Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
    return `${months[dt.getMonth()]} ${String(dt.getDate()).padStart(2, "0")}, ${dt.getFullYear()}`;
  };

  async function sha256(textOrBuffer) {
    const data = (typeof textOrBuffer === "string")
      ? new TextEncoder().encode(textOrBuffer)
      : textOrBuffer;
    const hash = await crypto.subtle.digest("SHA-256", data);
    return Array.from(new Uint8Array(hash)).map(b => b.toString(16).padStart(2, "0")).join("");
  }

  // Minimal erlaubte Inline-Markup-Whitelist für Absätze (b,i,u,code,a)
  function sanitizeLimitedHTML(html) {
    const tpl = document.createElement("template");
    tpl.innerHTML = html ?? "";
    const allowed = new Set(["B","I","U","CODE","A","BR","STRONG","EM","SMALL","SUP","SUB"]);
    const walker = document.createTreeWalker(tpl.content, NodeFilter.SHOW_ELEMENT, null);
    const toRemove = [];
    while (walker.nextNode()) {
      const el = walker.currentNode;
      if (!allowed.has(el.tagName)) {
        const span = document.createElement("span");
        span.textContent = el.textContent;
        el.replaceWith(span);
      } else if (el.tagName === "A") {
        el.setAttribute("rel", "noopener noreferrer");
        el.setAttribute("target", "_blank");
      }
      // Entferne Style-Attribute
      if (el.hasAttribute && el.hasAttribute("style")) el.removeAttribute("style");
      // Keine event-Handler
      [...el.attributes || []].forEach(a => { if (a.name.startsWith("on")) el.removeAttribute(a.name); });
    }
    return tpl.innerHTML;
  }


  const defaultConfig = {
    target: "#app",
    lang: "de",              // "de" | "en"
    redact: false,           // true blendet als sensibel markierte Stellen aus
    showDigests: true,       // SHA-256 Prüfsummen anzeigen
    printTitle: true,        // Titel auf Druckseite
    toc: true,               // Inhaltsverzeichnis anzeigen
    numbering: true,         // Abschnitte nummerieren
    evidencePrefix: "Beweisbild",
    evidenceZeroPad: 2,      // 01, 02, ...
    metadata: {
      de: {
        title: "Public-Ausgabe – Forensisches Gutachten (Auszug)",
        subtitle: "Dokumentation und Nachweise",
        author: "Isabel Schöps, geb. Thiel",
        releaseDate: "2025-08-24",
        version: "Public 1.0",
        legalNote: "Diese Public-Ausgabe enthält bewusst keine Quellcodedaten und keine personenbezogenen Sonderkategorien.",
      },
      en: {
        title: "Public Edition – Forensic Report (Extract)",
        subtitle: "Documentation and Evidence",
        author: "Isabel Schöps (née Thiel)",
        releaseDate: "2025-08-24",
        version: "Public 1.0",
        legalNote: "This public edition intentionally excludes source code and special-category personal data.",
      }
    },
    // Inhalte befüllst du unten in content.de / content.en
    content: {
      de: {
        summary: "Kurzüberblick über Zweck, Kontext und Geltungsbereich der Public-Ausgabe.",
        sections: [
          {
            id: "einleitung",
            title: "Einleitung",
            body: "Diese Ausgabe fasst die zentralen Inhalte für die allgemeine Öffentlichkeit zusammen.",
          },
          {
            id: "methodik",
            title: "Methodik",
            body: "Darstellung der Prüf- und Dokumentationsmethodik, ohne technische Betriebsgeheimnisse.",
          },
          {
            id: "nachweise",
            title: "Beweisbilder",
            body: "Nachfolgend sind nummerierte Beweisbilder mit Kurzbeschreibungen aufgelistet.",
            evidence: [
              { src: "assets/beweisbilder/beweisbild-01.jpg", caption: "Beweisbild 01 – Beispielbeschreibung." },
              { src: "assets/beweisbilder/beweisbild-02.jpg", caption: "Beweisbild 02 – Beispielbeschreibung." }
            ]
          }
        ],
        footnotes: [
          "Diese Public-Ausgabe ersetzt nicht die vollständige forensische Fassung.",
        ],
        sensitiveNotes: [
          { label: "Redaktion", text: "Interne Prüfschritte, interne IDs, Hashketten der Vollfassung." }
        ]
      },
      en: {
        summary: "Short overview of purpose, context, and scope of the public edition.",
        sections: [
          {
            id: "introduction",
            title: "Introduction",
            body: "This edition summarizes key points for the general public.",
          }
        ],
        footnotes: [
          "This public edition does not replace the full forensic version.",
        ],
        sensitiveNotes: [
          { label: "Redaction", text: "Internal checks, internal IDs, hash chains of the full edition." }
        ]
      }
    }
  };

  // ---------- Renderer ----------
  function injectBaseStyles() {
    const css = `
      :root { --maxw: 860px; --lh: 1.6; --fs: 16px; }
      * { box-sizing: border-box; }
      html, body { margin: 0; padding: 0; }
      body { font-family: system-ui, -apple-system, Segoe UI, Roboto, Ubuntu, Cantarell, sans-serif; line-height: var(--lh); font-size: var(--fs); color: #000; background: #fff; }
      .page { max-width: var(--maxw); margin: 0 auto; padding: 24px; }
      header.header { border-bottom: 1px solid #000; padding-bottom: 12px; margin-bottom: 24px; }
      header h1 { margin: 0 0 6px 0; font-size: 1.8rem; }
      header .meta { font-size: 0.95rem; }
      nav.toc { border: 1px solid #000; padding: 12px; margin: 24px 0; }
      nav.toc h2 { margin: 0 0 8px 0; font-size: 1.1rem; }
      nav.toc ol { margin: 0; padding-left: 18px; }
      section { margin: 28px 0; }
      section h2 { font-size: 1.3rem; margin: 0 0 8px 0; }
      p { margin: 10px 0; }
      .summary { font-size: 1.05rem; }
      figure { margin: 16px 0; }
      figure img { max-width: 100%; height: auto; display: block; }
      figure figcaption { font-size: 0.95rem; }
      .footnotes { border-top: 1px solid #000; margin-top: 32px; padding-top: 12px; font-size: 0.95rem; }
      .legal { margin-top: 16px; font-size: 0.95rem; }
      .controls { display: flex; gap: 8px; flex-wrap: wrap; margin: 12px 0 24px 0; }
      .controls button, .controls select { padding: 8px 10px; border: 1px solid #000; background: #fff; cursor: pointer; font: inherit; }
      .badge { font-size: 0.9rem; }
      .muted { color: #000; opacity: .7; }
      .monospace { font-family: ui-monospace, SFMono-Regular, Menlo, Consolas, monospace; font-size: 0.9rem; }
      .redacted { background: #000; color: #000; padding: 0 4px; }
      .page-break { break-after: page; }
      @media print {
        .controls { display: none !important; }
        nav.toc { break-after: page; }
        header.header { border-bottom: 1px solid #000; }
        a { color: #000; text-decoration: none; }
      }
    `;
    const style = document.createElement("style");
    style.setAttribute("data-origin", "public-audit-layout");
    style.textContent = css;
    document.head.appendChild(style);
  }

  function buildTOC(sections) {
    const ol = document.createElement("ol");
    sections.forEach((s, idx) => {
      const li = document.createElement("li");
      const a = document.createElement("a");
      a.href = `#${s.id}`;
      a.textContent = `${idx + 1}. ${s.title}`;
      li.appendChild(a);
      ol.appendChild(li);
    });
    const nav = document.createElement("nav");
    nav.className = "toc";
    const h2 = document.createElement("h2");
    h2.textContent = "Inhalt";
    nav.appendChild(h2);
    nav.appendChild(ol);
    return nav;
  }

  function numberedTitle(idx, title, numbering) {
    return numbering ? `${idx + 1}. ${title}` : title;
  }

  function renderSection(section, idx, numbering, cfg) {
    const sec = document.createElement("section");
    sec.id = section.id || `sec-${idx+1}`;

    const h2 = document.createElement("h2");
    h2.textContent = numberedTitle(idx, section.title, numbering);
    sec.appendChild(h2);

    if (section.body) {
      const p = document.createElement("div");
      p.innerHTML = sanitizeLimitedHTML(section.body);
      sec.appendChild(p);
    }

    if (Array.isArray(section.evidence) && section.evidence.length) {
      section.evidence.forEach((ev, i) => {
        const fig = document.createElement("figure");
        const img = document.createElement("img");
        img.alt = `${cfg.evidencePrefix} ${String(i+1).padStart(cfg.evidenceZeroPad, "0")}`;
        img.loading = "lazy";
        img.src = ev.src;
        const cap = document.createElement("figcaption");
        const num = `${cfg.evidencePrefix} ${String(i+1).padStart(cfg.evidenceZeroPad, "0")}`;
        cap.textContent = ev.caption ? `${num} — ${ev.caption}` : num;
        fig.appendChild(img);
        fig.appendChild(cap);
        sec.appendChild(fig);
      });
    }
    return sec;
  }

  function buildHeader(meta, lang, showPrintTitle) {
    const header = document.createElement("header");
    header.className = "header";
    const h1 = document.createElement("h1");
    h1.textContent = meta.title;
    const subtitle = document.createElement("div");
    subtitle.className = "muted";
    subtitle.textContent = meta.subtitle;

    const metaLine = document.createElement("div");
    metaLine.className = "meta";
    const release = lang === "de" ? formatDateDE(meta.releaseDate) : formatDateEN(meta.releaseDate);
    metaLine.textContent = `${meta.author} · ${release} · ${meta.version}`;

    header.appendChild(h1);
    header.appendChild(subtitle);
    header.appendChild(metaLine);
    if (showPrintTitle) {
      header.setAttribute("data-print-title", "true");
    }
    return header;
  }

  function buildControls(cfg, meta, onLangChange, onRedactToggle, onPrint, onDigest) {
    const c = document.createElement("div");
    c.className = "controls";
    const langSel = document.createElement("select");
    [["de","Deutsch"],["en","English"]].forEach(([v,l])=>{
      const opt = document.createElement("option");
      opt.value = v; opt.textContent = l;
      if (v === cfg.lang) opt.selected = true;
      langSel.appendChild(opt);
    });

    const redactBtn = document.createElement("button");
    redactBtn.textContent = cfg.redact ? "Redaktion aus" : "Redaktion an";

    const printBtn = document.createElement("button");
    printBtn.textContent = "Drucken / PDF";

    const digestBtn = document.createElement("button");
    digestBtn.textContent = "Integrität";

    langSel.addEventListener("change", (e)=> onLangChange(e.target.value));
    redactBtn.addEventListener("click", ()=> onRedactToggle());
    printBtn.addEventListener("click", ()=> onPrint());
    digestBtn.addEventListener("click", ()=> onDigest());

    c.appendChild(langSel);
    c.appendChild(redactBtn);
    c.appendChild(printBtn);
    if (cfg.showDigests) c.appendChild(digestBtn);
    return c;
  }

  async function computeDigests(cfg, meta, textBlocks, imageUrls) {
    const results = [];
    results.push(["Titel", await sha256(meta.title)]);
    results.push(["Untertitel", await sha256(meta.subtitle)]);
    results.push(["Version", await sha256(meta.version)]);
    results.push(["ReleaseDate", await sha256(String(meta.releaseDate))]);
    for (let i=0;i<textBlocks.length;i++){
      results.push([`Textblock ${i+1}`, await sha256(textBlocks[i])]);
    }
    // Bilder
    for (let i=0;i<imageUrls.length;i++){
      try {
        const res = await fetch(imageUrls[i], { cache: "no-store" });
        const buf = await res.arrayBuffer();
        const h = await sha256(buf);
        results.push([`Bild ${i+1}`, h]);
      } catch(e) {
        results.push([`Bild ${i+1}`, `Fehler: ${e.message}`]);
      }
    }
    return results;
  }

  function renderFootnotes(footnotes) {
    if (!footnotes || !footnotes.length) return null;
    const wrap = document.createElement("div");
    wrap.className = "footnotes";
    const h = document.createElement("div");
    h.textContent = "Anmerkungen";
    wrap.appendChild(h);
    const ol = document.createElement("ol");
    footnotes.forEach(fn => {
      const li = document.createElement("li");
      li.innerHTML = sanitizeLimitedHTML(fn);
      ol.appendChild(li);
    });
    wrap.appendChild(ol);
    return wrap;
  }

  function renderLegal(note) {
    const div = document.createElement("div");
    div.className = "legal muted";
    div.textContent = note || "";
    return div;
  }

  function applyRedaction(root, sensitiveNotes, active) {
    // Strategie: Als sensibel markierte Blöcke werden als schwarze Balken dargestellt.
    const zoneId = "sensitive-zone";
    let zone = root.querySelector(`#${zoneId}`);
    if (!zone) {
      zone = document.createElement("section");
      zone.id = zoneId;
      const h2 = document.createElement("h2");
      h2.textContent = "Redaktion";
      zone.appendChild(h2);
      const list = document.createElement("ul");
      list.className = "sensitive-list";
      sensitiveNotes.forEach(n => {
        const li = document.createElement("li");
        li.textContent = `${n.label}: ${n.text}`;
        list.appendChild(li);
      });
      zone.appendChild(list);
      root.appendChild(zone);
    }
    const listItems = zone.querySelectorAll("li");
    listItems.forEach(li => {
      li.innerHTML = active ? `<span class="redacted">████████</span>` : esc(li.textContent);
    });
  }

  function collectTextBlocks(content) {
    const blocks = [];
    if (content.summary) blocks.push(content.summary);
    (content.sections || []).forEach(s => {
      if (s.title) blocks.push(s.title);
      if (s.body) blocks.push(s.body);
      (s.evidence || []).forEach(ev => { if (ev.caption) blocks.push(ev.caption); });
    });
    (content.footnotes || []).forEach(f => blocks.push(f));
    (content.sensitiveNotes || []).forEach(n => blocks.push(n.text));
    return blocks;
  }

  function collectImageUrls(content) {
    const urls = [];
    (content.sections || []).forEach(s => {
      (s.evidence || []).forEach(ev => { if (ev.src) urls.push(ev.src); });
    });
    return urls;
  }

  function render(config) {
    const cfg = Object.assign({}, defaultConfig, config || {});
    const rootSel = cfg.target || "#app";
    let mount = document.querySelector(rootSel);
    if (!mount) {
      mount = document.createElement("div");
      mount.id = rootSel.replace("#", "");
      document.body.appendChild(mount);
    }
    mount.innerHTML = "";

    injectBaseStyles();

    const lang = (cfg.lang === "en") ? "en" : "de";
    const meta = cfg.metadata[lang];
    const content = cfg.content[lang];

    const page = document.createElement("div");
    page.className = "page";

    // Controls
    const controls = buildControls(
      cfg, meta,
      (newLang)=> render(Object.assign({}, cfg, { lang: newLang })),
      ()=> render(Object.assign({}, cfg, { redact: !cfg.redact })),
      ()=> window.print(),
      async ()=> {
        const panel = document.createElement("div");
        panel.className = "monospace";
        panel.textContent = "Berechne Digests …";
        page.insertBefore(panel, page.firstChild);
        const texts = collectTextBlocks(content);
        const imgs = collectImageUrls(content);
        const digests = await computeDigests(cfg, meta, texts, imgs);
        panel.textContent = digests.map(([k,v]) => `${k}: ${v}`).join("\n");
      }
    );
    page.appendChild(controls);

    // Header
    const header = buildHeader(meta, lang, cfg.printTitle);
    page.appendChild(header);

    // Summary
    if (content.summary) {
      const sum = document.createElement("p");
      sum.className = "summary";
      sum.textContent = content.summary;
      page.appendChild(sum);
    }

    // TOC
    if (cfg.toc && content.sections?.length) {
      page.appendChild(buildTOC(content.sections));
    }

    // Sections
    (content.sections || []).forEach((s, idx) => {
      page.appendChild(renderSection(s, idx, cfg.numbering, cfg));
    });

    // Footnotes
    const fns = renderFootnotes(content.footnotes);
    if (fns) page.appendChild(fns);

    // Legal
    page.appendChild(renderLegal(meta.legalNote));

    // Sensitive toggle
    applyRedaction(page, content.sensitiveNotes || [], cfg.redact);

    mount.appendChild(page);
  }

  // Expose globale API
  window.PublicAuditLayout = {
    render,
    defaultConfig
  };

  // Auto-Render, falls global CONFIG vorhanden ist
  if (window.PUBLIC_AUDIT_CONFIG) {
    window.PublicAuditLayout.render(window.PUBLIC_AUDIT_CONFIG);
  }
})();m
