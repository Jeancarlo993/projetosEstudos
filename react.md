# Estudando REACT
## Introdução
* React é uma biblioteca Javascript. 
* Para usar React de foma mais fácil se usa a extensão JSX. 
* Com o react a gente consegue criar sites mais interativos para os usuários por meio de elementos  chamados components. 
* O componente mais simples é uma função JavaScript que aceita um único argumento e retorna um elemento react
## Renderização  
* Objetos React são mais simples e utilizam menos recurso que os elementos DOM do navegador
* Tudo que estiver dentro do nó raiz será gerenciado pelo React Dom
`<div id="root"></div> `
* Para renderizar um elemento em um nó raiz passe ambos para ReactDOM.render()
`ReactDOM.render(element, document.getelementById('root)); `




* Cada component herda da classe  React.Component, por tanto: `class xxxx extends React.Component{}`
* Para chamar um componente (class), temos que chamar a seu método render(), para isto basta usar a seguinte sintaxe
	<xxxx />;
É possível passar parâmetros para os componentes usando a propriedade value 
	<xxxx value={} />;

Para “lembrar” as coisas, os componentes usam o atributo state
a class React.Componente também tem um método chamado setState({value: 'x'});

Os componentes React podem ter estado (state) configurando this.state em seus construtores. this.state deve ser considerado como privado para o componente React que o definiu.,

Todas os componentes de classe React que possuem um método constructor devem iniciá-lo com uma chamada super (props).
