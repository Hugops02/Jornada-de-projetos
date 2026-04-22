var letraA = document.getElementById("LetraA");
var letraB = document.getElementById("LetraB");
var letraC = document.getElementById("LetraC");
var letraD = document.getElementById("LetraD");
var letraE = document.getElementById("LetraE");
var letraF = document.getElementById("LetraF");

var table = document.getElementById("table");

table.addEventListener("click", function (event) {
  if (event.target.id == "A") {
    letraA.style.backgroundColor = "rgb(191, 234, 215)";
    letraA.focus();
  }

  if (event.target.id == "B") {
    letraB.style.backgroundColor = "rgb(191, 234, 215)";
    letraB.focus();
  }

  if (event.target.id == "C") {
    letraC.style.backgroundColor = "rgb(191, 234, 215)";
    letraC.focus();
  }
  if (event.target.id == "D") {
    letraD.style.backgroundColor = "rgb(191, 234, 215)";
    letraD.focus();
  }
  if (event.target.id == "E") {
    letraE.style.backgroundColor = "rgb(191, 234, 215)";
    letraE.focus();
  }
  if (event.target.id == "F") {
    letraF.style.backgroundColor = "rgb(191, 234, 215)";
    letraF.focus();
  }
  setTimeout(function () {
    event.target.remove();
  }, 500);
});
