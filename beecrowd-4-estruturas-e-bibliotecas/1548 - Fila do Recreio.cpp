#include <iostream>

using namespace std;

struct No {
    int valor;
    No* prox;

    No(int n) {
        valor = n;
        prox = NULL;
    }
};

struct Lista {
    No* inicio;
    No* fim;
    int tamanho;

    Lista(){
        inicio = NULL;
        fim = NULL;
        tamanho = 0;
    }

    void inserirFinal(int n) {
        No* novo = new No(n);
        if(inicio == NULL){
            inicio = novo;
            fim = novo;
        }else {
            fim->prox = novo;
            fim = novo;
        }
        tamanho++;
    }

    void copiarPara(Lista &dest) {
        No* aux = inicio;
        while (aux != NULL) {
            dest.inserirFinal(aux->valor);
            aux = aux->prox;
        }
    }

    void imprimir() {
        No* aux = inicio;
        while(aux != NULL) {
            cout << aux->valor << " ";
            aux = aux->prox;
        }
        cout << endl;
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

    int contarInalterados(Lista &ordenada) {
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

        Lista lOriginal;
        Lista lOrdenada;

        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            lOriginal.inserirFinal(x);
        }

        // Copiar os valores originais para a lista ordenada
        lOriginal.copiarPara(lOrdenada);

        // Ordenar a lista ordenada
        lOrdenada.ordenarDecrescente();

        // Contar quantos elementos não mudaram de posição
        int inalterados = lOriginal.contarInalterados(lOrdenada);

        cout << inalterados << endl;
    }

    return 0;
}
