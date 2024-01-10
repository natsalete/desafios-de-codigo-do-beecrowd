#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;
    while(n--){
        int pa, pb;
        double ta, tb;

        cin >> pa >> pb >> ta >> tb;

        int p_final_A = pa;
        int p_final_B = pb;

        for(int i = 1; i <= 100; i++){
            p_final_A = (p_final_A * (100 + ta)) / 100;
            p_final_B = (p_final_B * (100 + tb)) / 100;

            if(p_final_A > p_final_B){
                cout << i << " anos." << endl;
                break;
            }

        }

        if(p_final_A < p_final_B){
            cout << "Mais de 1 seculo." << endl;
        }

    }

    return 0;
}
