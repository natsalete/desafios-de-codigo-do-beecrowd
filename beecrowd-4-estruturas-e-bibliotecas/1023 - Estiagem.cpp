#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>


using namespace std;

bool ordenacao(pair<int, int> a, pair<int, int> b){ //Função para compara consumo
 return a.second < b.second;
}

int main(){
    int n, cont = 0;

    while(cin >> n && n != 0){

        vector<pair<int, int>> v; //armazenara a quantidade de moradores de cada imóvel e o respectivo consumo total de cada imóvel
        pair<int, int> residencia;

        for(int i = 0;i < n;i++){
            cin >> residencia.first >> residencia.second; //Leio os valores da entrada e armazeno em um pair temporário
            v.push_back(residencia); //Adiciono o pair no vetor
        }

        int aux;
        double soma_first = 0, soma_second = 0;

        for(int i = 0; i < v.size(); i++){
            soma_first += v[i].first;
            soma_second += v[i].second;
            aux = v[i].second / v[i].first;
            v[i].second = floor(aux);
        }

        sort(v.begin(), v.end(),ordenacao);

        double cons_medio = soma_second / soma_first;

        cont++;

        cout << "Cidade# " << cont << ":" << endl;

        for(int i = 0; i < v.size(); i++){
            if(v[i].second == v[i+1].second){
                v[i+1].first += v[i].first;
                v[i].first = '\0';
                v[i].second = '\0';

            }
        }


        for(int i = 0; i < v.size()-1; i++){
            if(v[i].first != 0){
                cout << v[i].first << "-" << v[i].second << " ";
            }
        }

        cout << v[n-1].first << "-" << v[n-1].second << endl;

        cout.precision(2);
        cout.setf(ios::fixed);

        cout << "Consumo medio: " << floorf(cons_medio*100)/100 << " m3." << endl << endl;
    }

    return 0;
}
