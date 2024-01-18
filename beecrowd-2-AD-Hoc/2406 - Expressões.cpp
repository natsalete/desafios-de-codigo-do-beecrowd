#include <iostream>
#include <stack>
#define MAX 112345

using namespace std;

int main(){

    int n;
    cin >> n ;

    while (n--){

        char a[MAX];

        cin >> a;

        stack<char> pilha;

        bool valid = true;

        for(int i = 0; a[i] != '\0'; i++){
            char c = a[i];
            if (c == '(' || c == '[' || c == '{'){
                pilha.push(c);
            }else{
                if (pilha.empty()){
                    valid = false;
                }else{
                    char topo = pilha.top();

                    pilha.pop();

                    if((c == ')' && topo != '(') ||
                    (c == ']' && topo != '[') ||
                    (c == '}' && topo != '{')){
                        valid = false;
                    }
                }
            }

            if(valid == false){
              break;
            }
        }

        if(pilha.empty() == false){
            valid = false;
        }

        if(valid == true){
            cout <<"S" << endl;
        }else{
            cout <<"N" << endl;
        }

    }

    return 0;
}
