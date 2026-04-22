var canvas = document.getElementById("progress");
var ctx = canvas.getContex("2d");

var x = 0;
var y = 0;
var altura = 10;
var largura = 0;
var fator = 60;
var resolução = 1280;

cxt.fillstyle = "#4169E1";

function animacao() {
  ctx.fillRect(x, y, (largura = largura + fator), altura);

  if (largura > resolução) {
    clearInterval(atualiza);
  }
}
var atualiza = setInterval(animacao, 10);
