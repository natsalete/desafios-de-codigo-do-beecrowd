#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    pair<int, int> sorveteiros;

   int s, inicio, fim, i, p, teste=1;

  while (cin >> p >> s){

    vector< pair<int, int> > v;

    if(p == 0 && s == 0){
        break;
    }

    for(int i = 0; i < s ;i++){
		cin >> sorveteiros.first >> sorveteiros.second; //Leio os valores da entrada e armazeno em um pair temporário
		v.push_back(sorveteiros); //Adiciono o pair no vetor
	}

    sort(v.begin(), v.end());



    inicio = v[0].first;
    fim = v[0].second;

    cout << "Teste " << teste++ << endl;


    for (i = 1; i < s; i++){

      while (i < s && v[i].first <= fim){
        if (v[i].second > fim){
          fim = v[i].second;
        }
        i++;
      }

      cout << inicio << " " << fim << endl;


      inicio = v[i].first;
      fim = v[i].second;
    }

    if (i == s){ /* o ultimo sorveteiro constitui um intervalo sozinho */
      cout << inicio << " " << fim << endl;
    }
    cout << endl;
  }


  return 0;
}


