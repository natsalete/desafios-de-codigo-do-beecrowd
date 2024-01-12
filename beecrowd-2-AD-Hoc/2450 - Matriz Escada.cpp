#include<bits/stdc++.h>
using namespace std;
#define MAX 501

int main(){
    int n, m;
    cin >> n >> m;
    int matriz[MAX][MAX];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matriz[i][j];
        }
    }
    int cont = 0, l_ant;
    bool resp = true;

    for(int i=0; i<n; i++){
        l_ant = cont;
        cont = 0;
        for(int j=0; j<m; j++){
            if(matriz[i][j] == 0){
                cont++;
            }else{
                if(l_ant==m){
                    if(cont!=l_ant){
                        resp = false;
                    }
                }else if(i!=0 && cont<=l_ant && cont!=m){
                    resp = false;
                }
                break;
            }

        }
        if(!resp){
        break;
        }
    }

    if(resp){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    return 0;
}
