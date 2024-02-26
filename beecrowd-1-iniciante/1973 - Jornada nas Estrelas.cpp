#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int v[n];
  long long int totalOvelhas = 0;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    totalOvelhas += v[i];
  }

  int v_inicial[n];
  for (int i = 1; i <= n; i++) {
     v_inicial[i] = v[i];
  }

  int pos = 1, ovelhaAtacada = 0;


  while (true) {
    int numCarneiros = 0;
    if (v[pos] > 0) {
      numCarneiros = v[pos];
      ovelhaAtacada++;
      v[pos]--;
    }

    if (numCarneiros % 2 == 0) {
      if (pos - 1 >= 1) {
        pos--;
      } else {
        break;
      }
    } else {
      if (pos + 1 <= n) {
        pos++;
      } else {
        break;
      }
    }
  }

  int estrelasAtacadas = 0;
  for (int i = 1; i <= n; i++) {
    if(v_inicial[i] != v[i]){
        estrelasAtacadas++;
    }
  }


  cout << estrelasAtacadas << " " << totalOvelhas - ovelhaAtacada << endl;

  return 0;
}
