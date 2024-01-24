#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;

    cin >> n;

    cin.ignore();

    while(n--){
        string expressao;

        getline(cin, expressao);

        stack<char> pilha;

        int cont = 0;
        for(int i = 0; i < expressao.size(); i++){//Passamos por cada caractere da expressão
            if(expressao[i] == '<'){//Se achamos um < , adicionamos ele na pilha
                pilha.push('<');
               }else if(expressao[i] == '>'){//Se achamos um >, verificamos se o topo dapilha tem um <
                    if(!pilha.empty()){//Se a pilha não está vazia,é pq temos um <
                        pilha.pop();//Caso exista um < no topo da pilha, removemos ele.
                        cont++; // soma a quantidade de diamantes possíveis
                    }
               }
        }

        cout << cont << endl;
    }



    return 0;
}

