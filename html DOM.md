# HTML DOM  
## Definição  
* Documento Object Model é um padrão da W3C  
![exemplo DOM](https://www.w3schools.com/js/pic_htmltree.gif)   
* Define o acesso padrão aos documentos  
* É separado em 3 partes  
	* **core DOM** - modelo padrão para todos document types  
	* **XML DOM** - modelo padrão para documentos XML  
	* **HTML DOM** - modelo padrão para documentos HTML  
* HTML DOM é o modelo padrão e interface de programação para o HTML. Ele define  
	* Os **elementos** HTML como objetos  
	* As **propriedades** de de todos os elementos HTML  
	* Os **métodos de acesso** para todos os elementos HTML  
	* Os **eventos** de todos os elementos HTML  
* HTML DOM é o padrão para como mudar,acrescentar, capturar ou deletar elementos HTML    
  
* A Interface de programação do DOM  
	* O HTML DOM pode ser acessado com JavaScript e outras linguagens de programação  
	* No DOM, todos os elementos HTML são definidos como objetos  
	* Uma property é um valor que vc pode recuperar ou ajustar (como mudar o conteúdo de uma tag HTML)  
	* Um method é uma ação que vc pode fazer (como adcionar ou deleter um elemento html)  
### Exemplos de method e property:
* Método getElementById forma de acesso mais comum de um elemento HTML, usa o ID do elemento  
* Propriedade innerHTML recupera o conteúdo de um elemento  
  
## HTML DOM Document  
* O objeto document representa sua página web.
* Para acessar qualquer elemento da página HTML primeiro acessaremos o document
* Exemplos mais comuns 
	* Achar um elemento HTML
		* document.getElementById("id")
		* document.getElementByTagName("name")
		* document.getElementByClassName("name")
	* Mudar um elemento HTML
		* element.innerHTML = new html content <-Proprieade
		* element.attribute = new value  <-Proprieade
		* element.style.property = new style  <-Proprieade
		* element.setAttribute(attribute,value) <- Método
	* Adicionar ou deletar elementos
		* document.createElement(element)
		* document.removeChild(element)
		* document.replaceChild(new,old)
		* document.write(text)	
	* Adicionando um evento
		* document.getElementById(id).onclick = function(){code} <-onclick é uma propriedade ou um método?
## HTML DOM navegação  
* Tudo no documento HTML é um nó
	* O documento em si é um document node
	* os elementos HTML são element node
	* o texto dentro do HTML são text node
	* Todo atributo HTML é um attribute node (deprecated)
	* Todos os comentários são comment nodes
### Relação dos nós
* Os nós tem uma relação hierarquica uns com os outros
* O termo pai, filho e irmãos são usados para descrever a relação
	* O topo da árvore é chatado root ou root node
	* Todos os nós tem exatamente um pai, exceto o root que não tem pai
	* Um nó pode ter vários filhos
	* Irmãos (siblings) são nós com o mesmo pai  

![node relations](https://www.w3schools.com/js/pic_navigate.gif)
	
