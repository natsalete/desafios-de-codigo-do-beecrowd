#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;

    cin >> n;

    while(n--){
        pair<string, string> nome1_parOUimpar;
        pair<string, string> nome2_parOUimpar;

        cin >> nome1_parOUimpar.first >> nome1_parOUimpar.second;
        cin >> nome2_parOUimpar.first >> nome2_parOUimpar.second;

        int x, y, soma = 0;

        cin >> x >> y;

        soma = x + y;

        if(soma % 2 == 0){
            if(nome1_parOUimpar.second == "PAR"){
                cout << nome1_parOUimpar.first << endl;
            }else{
                cout << nome2_parOUimpar.first << endl;
            }
        }else {
           if(nome1_parOUimpar.second == "IMPAR"){
                cout << nome1_parOUimpar.first << endl;
            }else{
                cout << nome2_parOUimpar.first << endl;
            }
        }

    }


	return 0;
}


