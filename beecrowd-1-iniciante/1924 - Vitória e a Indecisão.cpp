#include <iostream>

using namespace std;

int main () {
    int n;

    cin >> n;

    cin.ignore();

    string curso;
    while(n--){
        getline(cin,curso);
    }

    cout << "Ciencia da Computacao" << endl;

	return 0;
}
