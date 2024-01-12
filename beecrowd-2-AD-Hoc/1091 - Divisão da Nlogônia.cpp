#include <iostream>

using namespace std;

int main() {
    int k,x, y;

    while(cin >> k){
    if(k == 0){
        return 0;
    }else{
    cin >> x >> y;
    int w, v;
    for(int i = 0; i < k; i++){
        cin >> w >> v;
        if(w == x || v == y){
            cout << "divisa" << endl;
        }else if(w > x && v < y){
            cout << "SE" << endl;
        }else if(w > x && v > y){
            cout << "NE" << endl;
        }else if(w < x && v > y){
            cout << "NO" << endl;
        }else if (w < x && v < y){
            cout << "SO" << endl;
        }
    }
    }
    }

    return 0;
}
