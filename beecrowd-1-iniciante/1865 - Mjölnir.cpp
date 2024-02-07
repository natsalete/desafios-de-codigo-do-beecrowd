#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector< pair<string, int> > v;

    pair<string, int> nome_forca;

    int n;

    cin >> n;

    while(n--){
        cin >> nome_forca.first >> nome_forca.second;
        v.push_back(nome_forca);
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i].first == "Thor"){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }

    }

	return 0;
}

