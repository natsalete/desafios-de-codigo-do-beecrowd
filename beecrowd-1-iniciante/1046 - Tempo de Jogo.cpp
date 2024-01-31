#include <iostream>
#include <math.h>


using namespace std;

int main(){
    int a, b, duracao;

    cin >> a >> b;

   if(a == 0 && b == 0 || a == b){
        duracao = 24;
   }else if(a > b){
        duracao = (b+24) - a;
   }else {
        duracao = b - a;
   }

   cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;

   return 0;
}




