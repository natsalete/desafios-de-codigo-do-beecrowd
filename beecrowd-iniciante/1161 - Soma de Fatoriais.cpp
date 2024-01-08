#include <iostream>


using namespace std;

int main (){
    int n, m;

    while(cin >> n >> m){
        long long int soma_n = 1, soma_m = 1;

        for(int i = n; i >= 1; i--){
            soma_n = soma_n * i;
        }

        for(int j = m; j >= 1; j--){
            soma_m = soma_m * j;
        }

        long long int resultado;

        resultado = soma_n + soma_m ;

        cout << resultado << endl;

    }



    return 0;
}
