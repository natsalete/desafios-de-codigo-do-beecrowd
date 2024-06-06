#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        string vilao;

        cin >> vilao;

        if(vilao == "Batmain"){
            cout << "N" << endl;
        }else {
            cout << "Y" << endl;
        }
    }
    return 0;
}
