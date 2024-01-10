#include <iostream>

using namespace std;

int main(){
    int b, g;

    cin >> b >> g;

    int precisa = g/2;

    if(b < precisa){
        cout << "Faltam " << precisa - b << " bolinha(s)" << endl;
    }else {
        cout << "Amelia tem todas bolinhas!" << endl;
    }

    return 0;
}
