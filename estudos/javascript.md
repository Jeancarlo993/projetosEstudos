# JAVASCRIPT
## Variáveis e Operadores
* let nomeDaVariavel
* const nomeDaVariavel
* operadores aritméticos 
	* = 
	* - 
	* + 
	* * 
	* /
	* %
* operadores lógicos
	* &&
	* ||
* Condicionais
	* pode usar um dos operadores para retornar um booleano
		* === //igual em valor e tipo
		* >
		* >=
		* <
		* <=
		* ! //negação
		* quando usar variáveis para booleanos usar "is" no nome da variável
	* if(condição){}else if(){}else{}
## Funções
* function nome(parametro1, parametro2){} //para criar
* nome(); //para executar
* funções são como qualquer outro objeto.

## Arrays e estruturas de repetição
* Criaçao:
	* const nomeDoArray = [valor1,valor2,valor3];
* Acesso:
	* nomeDoArray[chave]
* Existem vários métodos:
	* .push(valor) //inserir no fim do array
	* .pop() // remove o último da lista
	* .shift() //remove o primeiro da lista
	* .length // retorna tamanho da lista
## Estruturas de repetição 
* for(let index = 0; index < valorDaRepetição; index++){}
* é possível percorrer strings char a char

## Importação e exportação módulos
* nos frameworks podem ter formas diferentes de importação e exportação de módulos
* exportar:
	* module.exports = {coisas que eu quero exportar} no arquivo que eu quiser exportar
* Importar
	* require('./arquivo que eu quero importar')
	* import {lista, com, recursos, que , quero} from './local/arquivo' 
	* obs o import é mais atual
* é como se o arquivo ficasse aberto, então tudo que está nele vai pra memória, incluido variáveis 
