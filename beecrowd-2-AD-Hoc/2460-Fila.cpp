#include <iostream>

using namespace std;

struct No {
    int valor;
    No* prox;

    No() {
        valor = 0;
        prox = NULL;
    }

    No(int _valor) {
        valor = _valor;
        prox = NULL;
    }
};

struct Fila {
    No* inicio;
    No* fim;
    int n;

    Fila() {
        inicio = NULL;
        fim = NULL;
        n = 0;
    }

    void enfileirar(int valor) {
        No* novo = new No(valor);
        if(inicio == NULL){
            inicio = novo;
            fim = novo;
        }else {
            fim->prox = novo;
            fim = novo;
        }
        n++;
    }

    void desenfileirar(){
        if(n == 0) return;
        if(n == 1){
            delete(inicio);
            inicio = NULL;
            fim = NULL;
            n = 0;
            return;
        }
        No* aux = inicio;
        inicio = inicio->prox;
        delete(aux);
        n--;
    }

    void removerElemento(int valor) {
        if (inicio == NULL) return; // Fila vazia

        if (inicio->valor == valor) {
            desenfileirar();
            return;
        }

        No* atual = inicio;
        No* anterior = NULL;

        while (atual != NULL && atual->valor != valor) {
            anterior = atual;
            atual = atual->prox;
        }

        if (atual == NULL) return; // Valor não encontrado

        if (atual == fim) {
            delete(fim);
            fim = anterior;
            anterior->prox = NULL;
            return;
        }

        anterior->prox = atual->prox;
        delete (atual);
        n--;
    }

    int frente(){
        if(inicio == NULL) return 0;
        return inicio->valor;
    }

    void imprimir() {
        No* frenteFila = inicio;

        while(frenteFila != fim) {
            cout << frenteFila->valor << " ";
            frenteFila = frenteFila->prox;
        }
         cout << frenteFila->valor << endl;
    }

};

int main(){
    Fila f;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        f.enfileirar(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        f.removerElemento(y);
    }

    f.imprimir();

    return 0;
}
