#include <iostream>
#include <string>

using namespace std;

int main() {
    string d;
    string n;

   while (cin >> d >> n){
        if(d[0] == '0' && n[0] == '0' &&  n.size() == 1 &&  d.size() == 1){
            return 0;
        }
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == d[0]) {
                n.erase(n.begin() + i);
                i--;  // Para compensar a remoção do caractere, decrementamos i
            }
        }

        bool todosZeros = true;
        for (int i = 0; i < n.size(); i++) {
            char c = n[i];
            if (c != '0') {
                todosZeros = false;
                break;
            }
        }

        if (todosZeros || n.empty()) {
            cout << 0 << endl;
        } else {
            for (int i = 0; i < n.size(); i++) {
                if (n[i] == '0') {
                    n.erase(n.begin() + i);
                    i--;
                }else{
                    break;
                }
            }
            cout << n << endl;
        }
   }
    return 0;
}
