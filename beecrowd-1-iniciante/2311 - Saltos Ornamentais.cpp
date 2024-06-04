#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        string nome;
        double gd;
        vector <double> v(7);

        cin >> nome;
        cin >> gd;

        double soma = 0;
        for(int i = 0; i < 7; i++){
            cin >> v[i];
            soma += v[i];
        }

        sort(v.begin(), v.end());

        double result = (soma - v[0] - v[6]) * gd;

        cout << nome << " " << fixed << setprecision(2) << result << endl;
    }


    return 0;
}
