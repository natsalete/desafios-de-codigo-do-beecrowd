#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> par;
    vector<int> impar;

    int x, cont_par = 0, cont_impar = 0;
    for(int i = 0; i < 15; i++){
       cin >> x;

        if(x % 2 == 0){
           par.push_back(x);
           cont_par++;
        }else{
            impar.push_back(x);
            cont_impar++;
        }

       if(cont_par == 5){
            for(int i = 0; i < par.size(); i++){
                cout << "par[" << i << "] = " << par[i] << endl;
            }
            par.clear();
            cont_par = 0;
       }
       if(cont_impar == 5){
            for(int i = 0; i < impar.size(); i++){
                cout << "impar[" << i << "] = " << impar[i] << endl;
            }
            impar.clear();
            cont_impar = 0;
       }
    }

    for(int i = 0; i < impar.size(); i++){
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for(int i = 0; i < par.size(); i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }


  return 0;
}

