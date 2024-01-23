#include <iostream>
#include <math.h>

using namespace std;

void simplificacao(int a, int b){

    if(abs(a) > abs(b)){
        for(int i = a ; i >= 1; i--){
            if(a % i == 0 && b % i == 0){
               a = a/i;
               b = b/i;
               break;
            }
        }
        cout << a << "/" << b << endl;
    }else {
        for(int i = b ; i >= 1; i--){
            if(a % i == 0 && b % i == 0){
               a = a/i;
               b = b/i;
               break;
            }
        }
        cout << a << "/" << b << endl;
    }

}


int main(){
    int n;

    cin >> n;

    while(n--){

        pair<int, pair<char, int>> a;
        pair<int, pair<char, int>> b;

        char x;

        cin >> a.first >> a.second.first >> a.second.second;
        cin >> x;
        cin >> b.first >> b.second.first >> b.second.second;

        switch(x){

        case '+':{
            int soma1 = (a.first * b.second.second) + (b.first * a.second.second);
            int soma2 = (a.second.second * b.second.second);
            cout << soma1 << "/" << soma2 << " = ";
            simplificacao(soma1, soma2);
            break;
        }

        case '-':{

            int sub1 = (a.first * b.second.second) - (b.first * a.second.second);
            int sub2 = (a.second.second * b.second.second);
            cout << sub1 << "/" << sub2 << " = ";
            simplificacao(sub1, sub2);
            break;
        }

        case '*': {
            int mult1 = (a.first * b.first);
            int mult2 = (a.second.second * b.second.second);
            cout << mult1 << "/" << mult2 << " = ";
            simplificacao(mult1, mult2);
            break;
        }

        case '/': {
            int div1 = (a.first * b.second.second);
            int div2 = (b.first * a.second.second);
            cout << div1 << "/" << div2 << " = ";
            simplificacao(div1, div2);
            break;
        }
        }
    }

    return 0;
}
