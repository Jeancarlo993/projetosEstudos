# NODE JS
## O que é
* Interpretador Javascript
* chegada do node faz com que seja possível criar aplicações mais diversas independentes do navegador
* v8 entende o javascript
* Libuv deu características de linguagem back end ao javascript
## Básico
* Interpretando:
	* node arquivo.js
## Modulagem 
* arquivos diferentes para cada módulo
* usar em todos os arquivos: module.exports = o que vai ser exportado
* para carregar um módulo usar require("local")

## Como fazer requisições 
* Protocolo http - Comunicação feita entre cliente e servidor
* Node JS já tem um módulo http mas é limitado, por isso usa-se frameworks
* Forma tradicional
	* var http/*poderia ser qualquer nome*/ = require('http'); //existem vários outros módulos do node como o fs
	* http.createServer().listen(8081); listen serve pra informar em qual porta quer abrir servidor
	* console.log("servidor online!")
	* rodar arquivo no terminal, basta executar o arquivo js pelo node
	* pra acessar, no navegador: localhost:porta 
		* localhost:8081
## Usando EXPRESS 
* Principal ferramenta usada para criar backend no node
* Framework minimalista (não é um framework fullstack)
* instalar na pasta do projeto
	* npm -v
	* npm install express --save
* const express = require("express") //importou express
* const app = express(); //criou a instancia 
* app.liste(8081); // última função do código, inicia o servidor
* função de callback é uma função executada semrpe que um evento acontece
* rota: é um caminho para a aplicação.
	* app.get('/',function(req, res){res.send("mensagem")}); //rota principal. o Send só pode ser chamado uma única vez
* parâmetros nas rotas
	* app.get('/nomeDaRota/:parametro1/:parametro2', function(req, res){res.send(req.params.parametro1);}); // esse function é uma função de callback
## Nodemon
* instalar: npm install nodemon -g
* executar: nodemon arquivo.js

## Html nas rotas
* basta usar res.sendfile('arquivo.html')
