#include <iostream>

using namespace std;

int main() {


    int n, number;

    cin >> n;

     for(int i = 0; i < n; i++){

        int result = 0;

        cin >> number;

        int somatoria[number];

        for(int i = 1; i <= number; i++){

          if(i % 2 == 0){
            somatoria[i] = -1;
          } else {
            somatoria[i] = 1;
          }
        }

          for(int i = 1; i <= number; i++){
             result += somatoria[i];
          }

          cout << result << endl;
     }

    return 0;
}
