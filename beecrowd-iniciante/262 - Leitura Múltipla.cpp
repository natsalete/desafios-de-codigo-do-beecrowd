#include <iostream>

using namespace std;

int main() {

    string rastro;
    int processamento;

     while(cin >> rastro >> processamento){

        int cont = 0;
        int cont_R = 0;

        for(int i = 0; i < rastro.size(); i++){
            if((rastro[i] == 'R' && rastro[i+1] == 'W') || (cont_R < processamento && i+1 == rastro.size())){
                cont++;
                cont_R = 0;
            }else if(rastro[i] == 'R'){
                cont_R++;
                if(cont_R == processamento){
                    cont++;
                    cont_R = 0;
                }
            }else if(rastro[i] == 'W'){
                cont++;
            }
           // cout << cont << endl;
        }

        cout << cont << endl;
    }
    return 0;
}
