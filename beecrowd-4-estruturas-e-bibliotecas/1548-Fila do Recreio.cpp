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

    int frente(){
        if(inicio == NULL) return 0;
        return inicio->valor;
    }

     void copiarPara(Fila &dest) {
        No* aux = inicio;
        while (aux != NULL) {
            dest.enfileirar(aux->valor);
            aux = aux->prox;
        }
    }

    void ordenarDecrescente() {
        if (!inicio) return;

        bool trocado;
        No* atual;
        No* ultimo = NULL;
        do {
            trocado = false;
            atual = inicio;

            while (atual->prox != ultimo) {
                if (atual->valor < atual->prox->valor) {
                    swap(atual->valor, atual->prox->valor);
                    trocado = true;
                }
                atual = atual->prox;
            }
            ultimo = atual;
        } while (trocado);
    }

    int contarInalterados(Fila &ordenada) {
        No* auxOriginal = inicio;
        No* auxOrdenada = ordenada.inicio;
        int cont = 0;

        while (auxOriginal != NULL && auxOrdenada != NULL) {
            if (auxOriginal->valor == auxOrdenada->valor) {
                cont++;
            }
            auxOriginal = auxOriginal->prox;
            auxOrdenada = auxOrdenada->prox;
        }

        return cont;
    }
};

int main(){

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        Fila fOriginal;
        Fila fOrdenada;

        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            fOriginal.enfileirar(x);
        }

        // Copiar os valores originais para a lista ordenada
        fOriginal.copiarPara(fOrdenada);

        // Ordenar a lista ordenada
        fOrdenada.ordenarDecrescente();

        // Contar quantos elementos não mudaram de posição
        int inalterados = fOriginal.contarInalterados(fOrdenada);

        cout << inalterados << endl;
    }


    return 0;
}




