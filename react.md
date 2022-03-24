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
* Elementos React são imutáveis, depois de criados não dá para alterar. Assim, só resta criar um novo elemento e mandar para o render mais uma vez
* o React só altera aquilo que foi modificado
## Componetes e Props
* Componentes permitem dividir a UI em partes independentes e reutilizáveis.
* API de componente https://pt-br.reactjs.org/docs/react-component.html
* Props são entradas arbitrárias passadas aos componentes 
* Componente de função é Um função JS que define um componente. Basta que aceite apenas um props (proprieade) e retorne um elemento React.
~~~
function Welcome(props){
  return <h1> Olá, {props} </h1>
 };
~~~
* Componentes de classe usam classe ES6 para definir o componente
~~~
class Welcome extends React.Component{
  render() {
    return <h1> Olá, {this.props.name}</h1>;
  }
}
~~~
