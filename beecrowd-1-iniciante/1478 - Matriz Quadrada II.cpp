#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;

    while(cin >> n && n != 0){
        if(n == 1){
            cout << setw(3) << 1 << endl << endl;
        }else{
            int matriz[100][100];

            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(i == j){
                        matriz[i][j] = 1;
                    }else if(i > j){
                        matriz[i][j] = i - j + 1;
                    }else {
                        matriz[i][j] = j - i + 1;
                    }
                }
            }


            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if(j == n-1){
                            cout << setw(3) << matriz[i][j];
                        }else{
                            cout << setw(3) << matriz[i][j] << " ";
                        }
                }
                cout << endl;
            }

            cout << endl;
        }
  }


    return 0;
}

