#include <iostream>

using namespace std;

int main() {
    string texto;

    getline(cin, texto);

    if(texto.size() <= 140){
        cout << "TWEET" << endl;
    }else {
        cout << "MUTE" << endl;
    }

    return 0;
}


