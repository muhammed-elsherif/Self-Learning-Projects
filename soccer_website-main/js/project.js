//dark mode
var content = document.getElementsByTagName("body")[0];
var darkMode = document.getElementById("dark-mode");

darkMode.addEventListener("click",function(){
    darkMode.classList.toggle("active");
    content.classList.toggle("night");
})();

function scrollupFunction() {
  document.body.scrollTop = 0;
  document.documentElement.scrollTop = 0;
}

 src = "../js/skrollr.js "
