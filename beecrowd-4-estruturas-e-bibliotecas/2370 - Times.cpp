#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparaAluno(pair<string, int> a, pair<string, int> b){ //Função para compara Alunos
 return a.second > b.second; //aluno a vem antes do aluno b se a habilidade do aluno a é menor que a nota do aluno b
}


int main(){
    int n , t;

    cin >> n >> t;

    pair<string, int> aluno;
    vector< pair<string, int> > v;

    for(int i = 0; i < n ;i++){
		cin >> aluno.first >> aluno.second; //Leio os valores da entrada e armazeno em um pair temporário
		v.push_back(aluno); //Adiciono o pair no vetor
	}

    sort(v.begin(), v.end(),comparaAluno); //Ordena o vetor utilizando o comparador de desigualdade da função

    /*for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;

	}*/



	for(int i = 0; i < t; i++){

        vector< pair<string, int> > time; //vector que armazenara os alunos do time

        int time_n;

        time_n = i + t;// interador que selecionara os alunos no vector

        for(int j = 0; j < v.size(); j++){
            if(j == i || j == time_n){
                time.push_back(v[j]);// adicionando os alunos na equipe
            }
            if(j == time_n){
                time_n += t;
            }
        }

        sort(time.begin(), time.end());// ordenando os alunos no time em ordem alfabetica

        cout << "Time " << i+ 1 << endl;

        for(int j = 0; j < time.size(); j++){

        cout<< time[j].first << endl; //Imprimindo cada time
        }

        cout << endl;
	}



    return 0;
}
