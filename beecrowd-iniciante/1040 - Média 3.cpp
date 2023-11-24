#include<iostream>

using namespace std;

int main(){

    float a, b, c, d, notaExame;

    cin >> a >> b >> c >> d;

    float media_ponderada = ((a * 2) + (b * 3) + (c * 4) + (d * 1))/10;

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << "Media: " << media_ponderada << endl;

    if(media_ponderada >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(media_ponderada >= 5.0 && media_ponderada <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> notaExame;
        cout << "Nota do exame: " << notaExame << endl;
        float media_final = (notaExame + media_ponderada)/ 2;
        if(media_final >= 5.0){
            cout << "Aluno aprovado." << endl;
        }else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << media_final << endl;
    }else {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}



