#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
using namespace std;
/***************************************************************************
numero aleatório usando como seed o clock do processador vezes o tempo
essa escolha se deve ao fato de que usando somente o time demoria ao menos 
1 segundo para variar e usando somente o clock os resultados poderiam ser os 
mesmos a cada execução da aplicação. Assim, aumentamos a dificuldade das 
repetições de valores
*****************************************************************************/
int main()
{
    char opcao;
    while(true){
        unsigned seed = clock()*time(0);
        opcao= cin.get();
        if(opcao == '\n'){
            srand(seed);
            cout<<rand()%6<<'\r'; 
        }
        if(opcao == 'q'){break;}
        
    }
    return 0;
}