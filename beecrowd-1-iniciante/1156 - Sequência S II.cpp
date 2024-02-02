#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double s = 1.0;
  int x = 1;
  int y = 2;

  while (x <= 39) {
    s += static_cast<double>(x) / y;
    x += 2;
    y += 2;
  }

  cout << fixed << setprecision(2) << s/3.2 << endl;

  return 0;
}
