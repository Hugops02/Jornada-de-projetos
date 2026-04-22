function validarEmail() {
  var email = document.getElementById("email").value;
  var regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

  if (email === "") {
    alert("Campo e-mail não preenchido.");
    return false;
  }

  if (!regex.test(email)) {
    alert("Por favor, insira um e-mail válido. Exemplo: aluno@exemplo.com");
    return false;
  }
  alert("E-mail validado com sucesso");
  return true;
}
