#include <iostream>
#include <climits> // Para usar o INT_MAX

using namespace std;

// Estrutura do nó para representar cada elemento da pilha
struct No {
    int valor; // Valor do nó
    No* prox;  // Ponteiro para o próximo nó

    // Construtor para inicializar o nó com um valor
    No(int _valor) {
        valor = _valor;
        prox = NULL;
    }
};

// Estrutura da pilha personalizada
struct Pilha {
    No* topo;    // Ponteiro para o topo da pilha principal
    No* topoMin; // Ponteiro para o topo da pilha de valores mínimos

    // Construtor para inicializar a pilha
    Pilha() {
        topo = NULL;
        topoMin = NULL;
    }

    // Função para inserir um valor na pilha
    void inserir(int valor) {
        No* novo = new No(valor); // Cria um novo nó com o valor
        novo->prox = topo;        // Aponta o novo nó para o antigo topo
        topo = novo;              // Atualiza o topo da pilha

        // Atualiza a pilha de valores mínimos
        if (topoMin == NULL || valor <= topoMin->valor) {
            No* novoMin = new No(valor); // Cria um novo nó para a pilha de mínimos
            novoMin->prox = topoMin;     // Aponta o novo nó mínimo para o antigo topoMin
            topoMin = novoMin;           // Atualiza o topo da pilha de mínimos
        }
    }

    // Função para remover um valor da pilha
    void remover() {
        if (topo == NULL) { // Verifica se a pilha está vazia
            cout << "EMPTY\n"; // Imprime "EMPTY" se a pilha estiver vazia
            return;
        }

        No* aux = topo;    // Guarda o nó atual do topo
        topo = topo->prox; // Atualiza o topo para o próximo nó

        // Remove o nó da pilha de valores mínimos, se necessário
        if (aux->valor == topoMin->valor) {
            No* auxMin = topoMin;    // Guarda o nó atual do topoMin
            topoMin = topoMin->prox; // Atualiza o topoMin para o próximo nó
            delete auxMin;           // Libera a memória do antigo topoMin
        }

        delete aux; // Libera a memória do antigo topo
    }

    // Função para obter o menor valor da pilha
    void menor() const {
        if (topoMin == NULL) { // Verifica se a pilha de mínimos está vazia
            cout << "EMPTY\n"; // Imprime "EMPTY" se a pilha de mínimos estiver vazia
            return;
        }
        cout << topoMin->valor << '\n'; // Imprime o valor mínimo atual
    }
};

int main() {
    // Desabilita a sincronização com stdio para tornar a entrada/saída mais rápida
    ios_base::sync_with_stdio(false);
    // Desativa o emparelhamento automático de cin com cout para evitar flushes desnecessários
    cin.tie(NULL);

    Pilha p; // Cria uma instância da pilha

    int n; // Número de operações
    cin >> n;

    while (n--) {
        string operacao; // Tipo de operação
        cin >> operacao;

        if (operacao == "PUSH") {
            int v; // Valor a ser empilhado
            cin >> v;
            p.inserir(v); // Insere o valor na pilha
        } else if (operacao == "POP") {
            p.remover(); // Remove o topo da pilha
        } else if (operacao == "MIN") {
            p.menor(); // Imprime o menor valor da pilha
        }
    }

    return 0;
}
