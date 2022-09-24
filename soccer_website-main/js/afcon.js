
 var content = document.getElementsByTagName("body")[0];
 var darkMode = document.getElementById("dark-mode");

 darkMode.addEventListener("click",function(){
     darkMode.classList.toggle("active");
     content.classList.toggle("night");
     
 })();

 function myFunction() {
    alert("Your form has been submited successfully !");
  }

  // button form 
  function myyyfunction() {
    var x = document.getElementById("form");
    if (x.style.display === "none") {
      x.style.display = "block";
    } else {
      x.style.display = "none";
    }
  }

