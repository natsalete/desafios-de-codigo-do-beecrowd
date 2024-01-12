#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
   for (int i = 0; i < x ; i++){

   int level = 0, ad = 0, dd = 0, ld = 0, ag = 0, dg = 0, lg = 0;
   double valor_dabriel = 0, valor_guarte = 0;

   cin >> level;
   cin >> ad >> dd >> ld;
   cin >> ag >> dg >> lg;

   valor_dabriel = (ad + dd)/2.0;
   valor_guarte = (ag + dg)/2.0;

   if(ld % 2 == 0){
    valor_dabriel += level;
   }

   if(lg % 2 == 0){
    valor_guarte += level;
   }

   if(valor_dabriel == valor_guarte){
        cout << "Empate" << endl;
   }else if (valor_dabriel > valor_guarte){
        cout << "Dabriel" << endl;
   }else {
        cout << "Guarte" << endl;
   }

   }


    return 0;
}
