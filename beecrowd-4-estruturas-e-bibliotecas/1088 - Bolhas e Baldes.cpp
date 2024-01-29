#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Função para realizar o Merge Sort e contar inversões
long long mergeAndCountInversions(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return 0; // Não há inversões em arrays de tamanho 0 ou 1
    }

    int mid = n / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    long long inversions = mergeAndCountInversions(left) + mergeAndCountInversions(right);

    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            inversions += (mid - i); // Conta as inversões ao mover um elemento da sub-lista direita
        }
    }

    while (i < left.size()) {
        arr[k++] = left[i++];
    }

    while (j < right.size()) {
        arr[k++] = right[j++];
    }

    return inversions;
}

// Função para determinar o vencedor do jogo
string determineWinner(vector<int>& v) {
    long long inversions = mergeAndCountInversions(v);

    if (inversions % 2 == 0) {
        return "Carlos";
    } else {
        return "Marcelo";
    }
}

int main() {
    int n;

    while (cin >> n && n != 0) {
        vector<int> v;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        // Determinar o vencedor
        string winner = determineWinner(v);

        // Imprimir o vencedor
        cout << winner << endl;
    }

    return 0;
}
