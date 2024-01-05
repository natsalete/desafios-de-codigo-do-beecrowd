#include <iostream>
#include <string>

using namespace std;

int main(){
    string risada;

    cin >> risada;

    string risada_vogal;

    for(int i = 0; i < risada.size(); i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' ||risada[i] == 'u'){
           risada_vogal += risada[i];
        }
    }

    
    string risada_de;
    for(int i = risada_vogal.size() - 1; i >= 0; i--){
            risada_de += risada_vogal[i];
    }

    if (risada_de.compare(risada_vogal) != 0){
        cout << "N" << endl;
    }else{
        cout << "S" << endl;
    }

    return 0;
}
