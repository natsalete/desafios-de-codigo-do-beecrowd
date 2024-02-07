#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () {
    string corvo;

    int soma = 0;

    while(getline(cin,corvo)){


        if(corvo != "caw caw"){

            vector<int> piscada;

            for(int i = 0; i < corvo.size(); i++){
                if(corvo[i] == '-'){
                    piscada.push_back(0);
                }else{
                    piscada.push_back(1);
                }
            }

            int aux[3];
            int x = 0;
            for(int i = piscada.size()-1; i >= 0; i--){
               aux[i] = (pow(2,x));
               x++;
            }


            for(int i = 0 ; i < piscada.size(); i++){
                if(piscada[i] == 1){
                    soma += aux[i];
                }
            }


        }else{
            cout << soma << endl;
            soma = 0;
        }
    }

	return 0;
}


