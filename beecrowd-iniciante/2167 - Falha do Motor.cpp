#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int RPM[N];
  for (int i = 0; i < N; i++) {
    cin >> RPM[i];
  }

  
  int i = 1;
  while (i < N) {
    if (RPM[i] < RPM[i - 1]) {
      break;
    }
    i++;
  }

    if (i == N){
      cout << 0 << endl; 
    }else {
    cout << i + 1 << endl;
    }
  return 0;
}
