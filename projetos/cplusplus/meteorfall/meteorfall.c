#include <iostream>
#include <unistd.h>
#include <unistd.h>
using namespace std;





int main()
{
    char cena[10][40];
    //espaço
    for(int i=0;i<=8;i++){
        for(int j = 0;j<=40;j++){
            cena[i][j]=' ';
        }   
    }
    //mar
    for(int i=0;i<=40;i++){
        cena[9][i]='~';
    }
    //estrelas
    for(int j=0;j<=5;j++){
        for(int i = 0;i<40;i++){
            if((i%2==0)&&(j%2==0)){cena[j+1][i+1]='*';}
        }   
    }

    const int linhas =10;                               //número de linhas
    const int colunas =40;                              //número de colunas
    int pos =0;                                         //variável de controle para o meteoro
    
        while(pos<=linhas){                             //frames: serão linhas quadros até o meteoro cair  
            system("clear");                            //limpa a tela e posicionao o cursor no início
            for(int i = 0;i < linhas; i++){             //quantidade de linhas
                for(int j=0;j<colunas;j++){             //quantidade de colunas
                    if(j==pos&&j==i){printf("A");}      //impressão do meteoro
                    else if(pos>9){printf("*");}        //explosão do mundo
                    else{printf("%c", cena[i][j]);}     //cenário
                }
                printf("\n");                           //espaço entre linhas
            }
            sleep(1);                                   //tempo entre frames
            pos+=1;                                     
        }
    return 0;
}

