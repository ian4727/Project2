/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["../**/*.{razor,cs}"],
  theme: {
    extend: {
      fontFamily: {
        'oswald': ['"Oswald"', 'sans-serif'],
        'nunito': ['"Nunito"', 'sans-serif']
      }
    },
    screens: {
      'sm': '549px',
      'md': '550px',
      // => @media (min-width: 768px) { ... }

      'lg': '1024px',
      // => @media (min-width: 1024px) { ... }

      'xl': '1280px',
      // => @media (min-width: 1280px) { ... }

      '2xl': '1536px',
    },
    colors : {
        "textprimary": "#145240",
        "lightgreen": "#DEE7D3",
    }
  },
  plugins: [],
}

