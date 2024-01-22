#include <iostream>
using namespace std;

int main(){
    int N, D;

    while(cin >> N >> D && N != 0 && D != 0){

        string s;

        cin >> s;

        string aux = "";

        for(int i = 0; i < s.size(); i++){

            while((!aux.empty()) && D > 0 && aux.back() < s[i]){
                aux.pop_back();
                D--;
            }
            aux.push_back(s[i]);
        }

        while(!aux.empty() && D > 0){
            aux.pop_back();
            D--;
        }
        cout << aux << endl;

    }
    return 0;
}
