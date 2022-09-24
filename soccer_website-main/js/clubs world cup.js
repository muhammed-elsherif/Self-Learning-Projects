/*  animation_on_scroll */
type = "text/javascript "
src = "../js/skrollr.js "
var s = skrollr.init();
let toggleBtn = document.querySelector("#toggleBtn");
let bodyEl = document.querySelector("body");
let darkMode = false;
toggleBtn.addEventListener('change', (event) => {
    darkMode = event.target.checked;
    if (darkMode) {
        bodyEl.classList.add("dark");
    } else {
        bodyEl.classList.remove("dark");
    }
})