#include <iostream>

using namespace std;

int main() {


    int n, m;
    int result,aux;

    while((cin >> n >> m) && (m != 0)){


    int v[6];

     result = m - n;

     if(result < 4){
        cout << "impossible" << endl;
     }else {
      if(result/2 == 100 || result/2 == 50 || result/2 == 20 || result/2 == 10 ||result/2 == 5 || result/2 == 2){
        cout << "possible" << endl;
      }else {

     v[0] = result/100;
     aux = result % 100;
     v[1]=  aux/50;
     aux = aux % 50;
     v[2] = aux / 20;
     aux = aux % 20;
     v[3] = aux / 10;
     aux = aux % 10;
     v[4] = aux / 5;
     aux = aux % 5;
     v[5] = aux/2;

     int soma =0;

     for(int i = 0; i < 6; i++){
        soma += v[i];
       // cout << v[i] << endl;
     }

    if(soma > 2 || soma < 2){
      cout << "impossible" << endl;
    }else {
      cout << "possible" << endl;
    }

    }

    }

    }

    return 0;
}
