#include<iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    cin.ignore();

    while(n--){
            
        string a;
        string b;

        cin >> a >> b;

        int tamanho_b = a.size() - b.size();

        a.erase (0,tamanho_b);

        if(a.compare(b) == 0){
            cout << "encaixa" << endl;
        }else{
            cout << "nao encaixa" <<endl;
        }
    
    }
    return 0;
}
