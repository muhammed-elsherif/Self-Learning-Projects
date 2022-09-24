//on click go the top of the page (scroll up)
function scrollupFunction() {
  document.body.scrollTop = 0;
  document.documentElement.scrollTop = 0;
 
}

//dark mode
const darkMode = document.getElementById("dark-mode");
const body = document.getElementById("dark");

darkMode.addEventListener("click",function()
{
  darkMode.classList.toggle("active"); //label
   body.classList.toggle("dark"); // body

})();

// button salah 
function salah() {
  var x = document.getElementById("moh");
  if (x.style.display === "none") {
    x.style.display = "block";
  } else {
    x.style.display = "none";
  }
};

// button trezeguet
function trezeguet() {
  var x = document.getElementById("tre");
  if (x.style.display === "none") {
    x.style.display = "block";
  } else {
    x.style.display = "none";
  }
};
// button elneny
function elneny() {
  var x = document.getElementById("neno");
  if (x.style.display === "none") {
    x.style.display = "block";
  } else {
    x.style.display = "none";
  }
};
