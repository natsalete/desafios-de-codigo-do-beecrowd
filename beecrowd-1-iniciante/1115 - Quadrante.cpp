#include <iostream>

using namespace std;

int main() {
    int x, y;

    while(cin >> x >> y){
        if(x == 0 || y == 0){
            break;
        }else if(x > 0 && y > 0){
            cout << "primeiro"<< endl;
        }else if(x < 0 && y > 0){
            cout << "segundo"<< endl;
        }else if(x < 0 && y < 0){
            cout << "terceiro"<< endl;
        }else{
            cout << "quarto"<< endl;
        }
    }

    return 0;
}
