#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int pos =0;
        while(pos<=10){
            system("clear");
            for(int i=0;i<10;i++){
                for(int j=0;j<20;j++){
                    if(j==pos&&j==i){printf("A");}
                    else if(pos>9){printf("*");}
                    else{printf(" ");}
                }
                printf("\n");
            }
            sleep(1);
            pos+=1;
        }
    return 0;
}
