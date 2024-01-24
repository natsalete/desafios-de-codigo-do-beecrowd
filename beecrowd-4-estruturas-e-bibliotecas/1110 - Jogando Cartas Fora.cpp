#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;

    while(cin >> n && n != 0){

        queue<int> fila;

        for(int i = 1; i <= n; i++){
           fila.push(i);// adicionar elementos na fila
        }

        int remover = n - 1;

        cout << "Discarded cards: ";
        while(remover--){
                if(remover != 0){
                    cout << fila.front() << ", ";//imprimir o primeiro elemento
                }else{
                    cout << fila.front() << endl;
                }
            fila.pop();//remover o primeiro elemento da fila
            fila.push(fila.front());//adicionar o próximo elemento (o que ficou no topo) para a base da fila.
            fila.pop();// remover o que foi pra base da fila
        }

        cout << "Remaining card: ";
        cout << fila.front() << endl;
    }

    return 0;
}
