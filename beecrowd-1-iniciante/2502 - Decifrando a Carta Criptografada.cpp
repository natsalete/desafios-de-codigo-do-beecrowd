#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int c, n;

    while(cin >> c >> n){

        cin.ignore();
        string primeira;
        string segunda;

        getline(cin, primeira);
        getline(cin, segunda);


        while(n--){
            string frase;

            getline(cin, frase);

            for(int i = 0; i < frase.size(); i++){
                for(int j = 0; j < segunda.size(); j++){
                    if(isupper(frase[i])){
                        if(frase[i] == segunda[j]){
                            frase[i] = primeira[j];
                        }else if(frase[i] == primeira[j]){
                            frase[i] = segunda[j];
                        }
                    }else {
                        if(frase[i] == tolower(segunda[j])){
                            frase[i] = tolower(primeira[j]);
                        }else if(frase[i] == tolower(primeira[j])){
                            frase[i] = tolower(segunda[j]);
                        }
                    }

                }
            }

            cout << frase << endl;
        }

        cout << endl;
    }


    return 0;
}
