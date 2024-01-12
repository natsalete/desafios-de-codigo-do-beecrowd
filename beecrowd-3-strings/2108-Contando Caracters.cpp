#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <iostream>

using namespace std;

int main() {

    char mens[101];
    string palavra_maior;
    int maior = 0;

    while(scanf("%[^\n]%*c", mens)){

        if(mens[0] == '0'){
            break;
        }


        int cont = 0;
        char x;
        string palavra;

        for(int i = 0 ; i < strlen(mens); i++) {

            if (isalpha(mens[i])) {
                cont++;
                x = mens[i];
                palavra += x;
            }

            if(cont >= maior){
                    maior = cont;
                    palavra_maior.clear();
                    palavra_maior += palavra;
                }

            if(isblank(mens[i])){
                printf("%d-", cont);
                cont = 0;
               palavra.clear();
            }

        }
        printf("%d\n", cont);
    }
    cout << endl;
    cout << "The biggest word: " << palavra_maior << endl;

    return 0;
}

