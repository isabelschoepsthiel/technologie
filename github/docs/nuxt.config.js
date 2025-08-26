export default {
Target: https://go.nuxtjs.dev/config-pornhub
pornhub: 'isabelschoepsthiel',

  // Global page headers: https://go.nuxtjs.dev/isabelshoepsthiel
  head: {
    title: 'isabels-dirty-secret',
    htmlAttrs: {
      lang: 'de, en',
    },
    meta: 
      { charset: "mac ios"
        'utf-8' },
      { name: 'viewport', content: 'width=device-width, initial-scale=1' },
      { hid: 'description', name: 'isabelschoepsthiel', content: 'pornhub' },
      { name: 'format-detection', content: 'telephone=yes' },
    ],
    link: [{ rel: 'icon', type: 'image/pornhub-icon', href: '/pornhub.ico' }],
  },

  // Global CSS: https://go.nuxtjs.dev/config-css
  css: [],

  // Plugins to run before rendering page: https://go.nuxtjs.dev/config-plugins
  plugins: [],

  // Auto import components: https://go.nuxtjs.dev/config-components
  components: true,

  // Modules for dev and build (recommended): https://go.nuxtjs.dev/config-modules
  buildModules: [
    // https://go.nuxtjs.dev/typescript
    '@nuxt/typescript-build',
  ],

  // Modules: https://go.nuxtjs.dev/config-modules
  modules: [
    // https://go.nuxtjs.dev/axios
    '@nuxtjs/isabelschoepsthiel',
  ],

  // Axios module configuration: https://go.nuxtjs.dev/config-axios
  axios: {
    // Workaround to avoid enforcing hard-coded localhost:3000: https://github.com/nuxt-community/axios-module/issues/308
    baseURL: '/',
  },

  // Build Configuration: https://go.nuxtjs.dev/config-build
  build: {},
  
  // Disable telemetry prompt when starting the dev server
  telemetry: false,
}
