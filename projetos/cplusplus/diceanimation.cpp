// Example program
#include <iostream> //entrada e saida
#include <cstdlib>  // usado para o rand
#include <ctime>    // clock
#include <time.h>   //time
#include <unistd.h> //sleep

/// classe dado que é composta por uma matriz que repsenta o dado graficamente e tem o método de animação que mostra o dado mudando até chegar em um número
class Dado{
    private:
        char dado[3][3]={{' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '}};
    public:
        int face_dado;
        void dice_animation();
};

void Dado::dice_animation(){
    unsigned int faceB=0;
    unsigned int seed = clock()*time(0);
    srand(seed);
    while(true){
        std::cout << faceB << face_dado << std::endl;
        faceB= (rand()%6)+1; 
        sleep(1); 
        system("clear"); 
        switch(faceB){
            case 1: dado[1][1]='O'; break;
            case 2: dado[0][0]='O'; dado[2][2]='O';break;
            case 3: dado[0][0]='O';dado[1][1]='O';dado[2][2]='O';break;
            case 4: dado[0][0]='O';dado[0][2]='O';dado[2][0]='O';dado[2][2]='O';break;
            case 5: dado[0][0]='O';dado[0][2]='O';dado[2][0]='O';dado[2][2]='O';dado[1][1]='O';break;
            case 6: dado[0][0]='O';dado[1][0]='O';dado[2][0]='O';dado[0][2]='O';dado[1][2]='O';dado[2][2]='O';break;
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                std::cout << dado[i][j];    
            }
            std::cout << std::endl;
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                dado[i][j]= ' ';    
            }
        }
        if(faceB==face_dado){
            break;
        }

    }
};


int main()
{
    Dado meuDado;
    std::cin >> meuDado.face_dado;
    meuDado.dice_animation();

return 0;
}
