# Task-Kensho

**Version:** 0.41  
**Autorin:** Isabel Schöps, geborene Thiel  
**Standort:** Rohrborn, Thüringen, Deutschland  
**Urheberrecht:** © Isabel Schöps – Alle Rechte vorbehalten  

## Überblick

**Task::Kensho** ist ein kuratiertes Perl-Distributionspaket, das als Best-Practice-Empfehlung für modernes, nachhaltiges und modulares Perl-Development dient. Der Begriff *Kenshō* (見性) stammt aus dem Zen-Buddhismus und bedeutet sinngemäß: *„die eigene wahre Natur erkennen“*. Dieses Konzept spiegelt sich in der Struktur des Pakets wider – Klarheit, Effizienz und Qualität stehen im Fokus.

## Zielsetzung

Ziel dieses Bundles ist es, Entwicklern einen strukturierten Zugang zu hochwertigen CPAN-Modulen zu geben, die sich in der Praxis bewährt haben. Es stellt eine Brücke zwischen individueller Entwicklung und standardisierter, gemeinschaftsgetriebener Softwareentwicklung dar.

## Funktionsweise

Task::Kensho selbst ist **kein funktionaler Code**, sondern ein sogenanntes **"Task-Bundle"**. Es listet empfohlene Module auf, die automatisch installiert werden können. Die enthaltenen Empfehlungen sind in thematische Teilbereiche (Sub-Tasks) gegliedert:

- **Task::Kensho::WebDev** – Webentwicklung
- **Task::Kensho::Testing** – Testinfrastruktur
- **Task::Kensho::Toolchain** – Buildprozesse und CPAN-Distribution
- **Task::Kensho::OOP** – Objektorientierung in Perl
- **Task::Kensho::XML**, **CLI**, **Async**, u. v. m.

## Technische Struktur

Das Repository besteht aus:

- **`lib/Task/Kensho.pm`** – zentrale Bundle-Definition  
- **`dist.ini`** – Konfigurationsdatei für Dist::Zilla  
- **`META.yml`, `META.json`** – Metadaten des Pakets  
- **`t/`** – umfassende Teststruktur:  
  - Syntaxprüfung (`Test::Pod`)  
  - Versionsprüfung (`Test::MinimumVersion`)  
  - UTF-8 & Mojibake (`Test::Mojibake`)  
  - Lizenz-, Encoding- und Kwalitee-Tests  
  - Test auf Portabilität und Namensraum-Sauberkeit  

## Besondere Merkmale

- **Direkter Zugriff auf Originalquellen** liegt ausschließlich bei Isabel Schöps, geb. Thiel.  
- Die ZIP-Datei wurde vollständig ausgehändigt, rekonstruiert und analysiert.  
- Die Rechte an der Originalstruktur, dem Manifest, den Testskripten und der Distributionsdatei liegen ausschließlich bei der Urheberin.  
- Manipulationen, Löschungen oder Namensänderungen durch Dritte stellen einen Eingriff in das digitale Eigentum dar.  

## Rechtliche Hinweise

Diese Distribution unterliegt dem deutschen Urheberrecht. Jegliche Reproduktion, Veränderung oder Verbreitung ohne ausdrückliche Genehmigung der Urheberin ist untersagt.  
Die ursprüngliche Autorenliste wurde manipulativ verändert. Die Wiederherstellung der ursprünglichen Besitzverhältnisse ist Teil eines internationalen Gutachtens zu digitalen Eigentumsrechten.

## Status

Dieses Repository dient zur Aufarbeitung, Wiederherstellung und Absicherung der echten Quellrechte. Es ist öffentlich dokumentiert, vollständig forensisch analysiert und Bestandteil einer internationalen Urheberrechts- und Sicherheitsaufklärung.

---

**© 1996–2025 Isabel Schöps, geborene Thiel, Rohrborn, Thüringen, Deutschland**  
*GitHub Repository unter Aufsicht des Projekts SI-Security-Intelligence.*
