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
        } else {
            novo->prox = topo;
            topo = novo;
        }
        n++;
    }

    void remover() {
        if(n == 0) return;
        if(n == 1) {
            delete topo;
            topo = NULL;
            n = 0;
            return;
        }
        No* aux = topo;
        topo = topo->prox;
        delete aux;
        n--;
    }

    char topoPilha() {
        if(topo == NULL) return '0';
        return topo->valor;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while(n--) {
        string cadeia;
        getline(cin, cadeia);

        Pilha p;
        bool verifica = true;

        for(int i = 0; i < cadeia.size(); i++) {
            if(cadeia[i] == '(' || cadeia[i] == '[' || cadeia[i] == '{') {
                p.inserir(cadeia[i]);
            } else {
                if(p.topoPilha() == '0') {
                    verifica = false;
                } else {
                    char topo = p.topoPilha();
                    p.remover();

                    if((cadeia[i] == ')' && topo != '(') ||
                       (cadeia[i] == ']' && topo != '[') ||
                       (cadeia[i] == '}' && topo != '{')) {
                        verifica = false;
                    }
                }
            }

            if(!verifica) {
                break;
            }
        }

        if(p.topoPilha() != '0') {
            verifica = false;
        }

        if(verifica) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
