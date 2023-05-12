const botao = document.getElementById("open_close");
const topicos_do_menu=["estudos_web","estudos_frameworks","estudos_marcacao","estudos_linguagens"];

//essa função vai receber o elemento a ser aberto e fechar os demais elementos do menu
function open_close_menu(elemento){
	//fechar todos os topicos que não são o que foi aberto
	for(let i=0;i<topicos_do_menu.length;i++){
		if(elemento!=topicos_do_menu[i]){
			open_close(topicos_do_menu[i],0);
		}
	}
	//checar se o tópico está aberto, se estiver aberto, fecha, se estiver fechado abre
	if(document.getElementById(elemento).style.opacity == "0"){
		open_close(elemento,1);
	}
	else{
		open_close(elemento,0);
	}
		
}
//essa função recebe um elemento, e uma opçao de abrir (true) ou fechar (false). Se estiver aberto fecha, se estiver fechado abre
function open_close(elemento,opcao){
	
	let menu = document.getElementById(elemento);
	let state_menu = menu.style.opacity;
	menu.style.zIndex = opcao;	
	menu.style.opacity = opcao;
}