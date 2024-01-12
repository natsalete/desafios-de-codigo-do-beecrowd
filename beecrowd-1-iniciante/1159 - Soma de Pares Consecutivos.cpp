#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x;
    vector<int>numeros;
    while(cin >> x && x != 0){
      int soma = 0;
      if(x % 2 == 0){
        for(int i = x; i < x+9; i++){
            if(i % 2 == 0){
              numeros.push_back(i);
            }
        }
        for(int i = 0; i < numeros.size(); i++){
        soma += numeros[i];
        }
        cout << soma << endl;
        numeros.clear();
      }else {
        for(int i = x+1; i < x+10; i++){
            if(i % 2 == 0){
              numeros.push_back(i);
            }
        }
        for(int i = 0; i < numeros.size(); i++){
        soma += numeros[i];
        }
        cout << soma << endl;
        numeros.clear();

      }

    }


    return 0;
}
