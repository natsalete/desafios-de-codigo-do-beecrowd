#include <iostream>
#include <stack>

using namespace std;

int main(){

    string expressao;

    while(getline(cin, expressao)){

        stack<char> pilha;
        bool verificacao = true;//Usamos a ideia de que a expressão é válida, até que se prove o contrário

        for(int i = 0; i < expressao.size(); i++){//Passamos por cada caractere da expressão
            if(expressao[i] == '('){//Se achamos um parêntese abrindo, adicionamos ele na pilha
                pilha.push('(');
               }else if(expressao[i] == ')'){//Se achamos um parêntese fechando, verificamos se o topo dapilha tem um parêntese abrindo
                    if(pilha.empty()){//Se a pilha é vazia, a expressão é inválida
                        verificacao = false;
                        break;
                    }else{
                        pilha.pop();//Caso exista um parêntese abrindo no topo da pilha, removemos ele.
                    }
               }
        }

        if(!pilha.empty()){//Se após processar toda a expressão ainda restar algum parêntese abrindo, a expressão também é inválida
            verificacao = false;
        }

        if(verificacao == false){
            cout << "incorrect" << endl;
        }else{
            cout << "correct" << endl;
        }
    }



    return 0;
}
