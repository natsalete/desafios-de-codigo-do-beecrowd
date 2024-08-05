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
    int n;

    cin >> n;

    cin.ignore();

    while(n--){
        string expressao;

        getline(cin, expressao);

        Pilha p;

        int cont = 0;
        for(int i = 0; i < expressao.size(); i++){
            if(expressao[i] == '<'){
                p.inserir('<');
            }else if(expressao[i] == '>'){
                if(p.topoPilha() != '0'){
                    p.remover();
                    cont++;
                }
            }
        }

        cout << cont << endl;

    }

    return 0;
}

