#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;
    int produto, qtd;
    double soma = 0;
    while(n--){
        cin >> produto >> qtd;

        if(produto == 1001){
            soma += qtd * 1.50;
        }else if(produto == 1002){
            soma += qtd * 2.50;
        }else if(produto == 1003){
            soma += qtd * 3.50;
        }else if(produto == 1004){
            soma += qtd * 4.50;
        }else {
            soma += qtd * 5.50;
        }
    }

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << soma << endl;
    return 0;
}


