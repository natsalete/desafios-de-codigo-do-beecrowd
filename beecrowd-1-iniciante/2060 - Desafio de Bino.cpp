#include<iostream>

using namespace std;

int main(){
    int n;

    cin >> n;
    int cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

    int num;
    while(n--){
        cin >> num;
          if(num % 2 == 0){
            cont2++;
          }
          if(num % 3 == 0){
            cont3++;
          }
          if(num % 4 == 0){
            cont4++;
          }
          if(num % 5 == 0){
            cont5++;
          }
    }

    cout << cont2 << " Multiplo(s) de 2" << endl;
    cout << cont3 << " Multiplo(s) de 3" << endl;
    cout << cont4 << " Multiplo(s) de 4" << endl;
    cout << cont5 << " Multiplo(s) de 5" << endl;

    return 0;
}

