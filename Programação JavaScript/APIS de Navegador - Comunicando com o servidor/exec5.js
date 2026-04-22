function Conexao() {
  const xhr = new XMLHttpRequest();

  xhr.open("GET", "https://jsonplaceholder.typicode.com/posts/1", true);

  xhr.onload = function () {
    if (xhr.status === 200) {
      const response = JSON.parse(xhr.responseText);
      console.log("Título do post:", response.title);
    } else {
      console.log("Ocorreu um erro durante a solicitação.");
    }
  };
  xhr.send();
}
