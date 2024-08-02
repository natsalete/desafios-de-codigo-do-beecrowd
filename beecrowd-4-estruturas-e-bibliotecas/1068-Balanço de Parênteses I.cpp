#include <iostream>

using namespace std;

struct No {
    char valor;
    No* prox;

    No() {
        valor = 0;
        prox = NULL;
    }

    No(char _valor) {
        valor = _valor;
        prox = NULL;
    }
};

struct Pilha {
    No* topo;
    int n;

    Pilha() {
        topo = NULL;
        n = 0;
    }

    void inserir(char valor) {
        No* novo = new No(valor);
        if(topo == NULL){
            topo = novo;
        }else {
            novo->prox = topo;
            topo = novo;
        }
        n++;
    }

    void remover(){
        if(n == 0) return;
        if(n == 1){
            delete(topo);
            topo = NULL;
            n = 0;
            return;
        }
        No* aux = topo;
        topo = topo->prox;
        delete(aux);
        n--;

    }

    char topoPilha(){
        if(topo == NULL) return '0';
        return topo->valor;
    }

};

int main(){
    string exprecao;

    while(getline(cin,exprecao)){
        Pilha p;
        bool verifica = true;


        for(int i = 0; i < exprecao.size(); i++){
            if(exprecao[i] == '('){
                p.inserir('(');
            }else if(exprecao[i] == ')'){
                if(p.topoPilha() == '0'){
                    verifica = false;
                    break;
                }else {
                    p.remover();
                }

            }
        }

        if(p.topoPilha() == '('){
            verifica = false;
        }

        if(verifica == false){
             cout << "incorrect" << endl;
        }else{
            cout << "correct" << endl;
        }
    }


    return 0;
}
