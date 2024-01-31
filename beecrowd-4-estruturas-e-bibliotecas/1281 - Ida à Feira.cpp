#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n --){
        int m;

        cin >> m;

        vector< pair <string, double> > produtos;
        pair<string, double> produto_nome;

        for(int i = 0; i < m; i++){
            cin >> produto_nome.first >> produto_nome.second;
            produtos.push_back(produto_nome);
        }

        vector< pair <string, double> > produtos_compra;
        pair<string, double> produto;

        int p;

        cin >> p;

        for(int i = 0; i < p; i++){
            cin >> produto.first >> produto.second;
            produtos_compra.push_back(produto);
        }

        double total = 0;
        for(int i = 0; i < produtos_compra.size(); i++){
            for(int j = 0; j < produtos.size(); j++){
                if(produtos_compra[i].first == produtos[j].first){
                    total += produtos_compra[i].second * produtos[j].second;
                }
            }
        }
        
        cout.precision(2);
        cout.setf(ios::fixed);

        cout << "R$ " << total << endl;
    }

   return 0;
}

