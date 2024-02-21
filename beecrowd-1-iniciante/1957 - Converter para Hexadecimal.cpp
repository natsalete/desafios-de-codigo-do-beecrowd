#include<iostream>
#include <vector>

using namespace std;

int main(){
    int v;

    string letras ={'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    cin >> v;

    vector <int> num_divi;
    int mod, div;
    if(v < 16){
        cout << letras[v] << endl;;
    }else{
        do{
          mod = v % 16;
          div = v/16;
          num_divi.push_back(mod);
          v = div;
        }while(v > 16);

        num_divi.push_back(v);

        for(int i = num_divi.size()-1; i >= 0; i--){
            cout << letras[num_divi[i]];
        }
        cout << endl;
    }





    return 0;
}


