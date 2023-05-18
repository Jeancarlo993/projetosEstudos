/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Inserttion sote decrescente
#include <iostream>
using namespace std;

int
main ()
{
  int teste[10] = { 9, 7, 15, 3, 1, 4, 2, 17, 8, 6 };
  cout << "Hello World" << teste[0] << std::endl;
  int swap = 0;
  int a = 0;
  int j= 0;
  ///insertion sort

    for (int i = 1; i < 10; i++){
        a = teste[i];
        for(j = i-1; j >= 0; j--){
            if(a < teste[j]){
                break;
            }else{
                swap = teste[i];
                teste[i] = teste[j];
                teste[j] = swap;
                i--;
            }
            for (int x = 0; x < 10; x++){
                std::cout << teste[x] << "*";
            }
            cout<<endl;
        }
    }
    for (int x = 0; x < 10; x++){
      std::cout << teste[x] << "*";
    }
  return 0;
}

