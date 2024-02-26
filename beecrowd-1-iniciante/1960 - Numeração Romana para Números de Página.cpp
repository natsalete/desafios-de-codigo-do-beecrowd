#include <iostream>
using namespace std;

int main() {
  int numero;

  cin >> numero;


  if (numero >= 900) {
    cout << "CM";
    numero -= 900;
  }

  if (numero >= 500) {
    cout << "D";
    numero -= 500;
  }

  if (numero >= 400) {
    cout << "CD";
    numero -= 400;
  }

  if (numero >= 100) {
    while (numero >= 100) {
      cout << "C";
      numero -= 100;
    }
  }

  if (numero >= 90) {
    cout << "XC";
    numero -= 90;
  }

  if (numero >= 50) {
    cout << "L";
    numero -= 50;
  }

  if (numero >= 40) {
    cout << "XL";
    numero -= 40;
  }

  if (numero >= 10) {
    while (numero >= 10) {
      cout << "X";
      numero -= 10;
    }
  }

  if (numero >= 9) {
    cout << "IX";
    numero -= 9;
  }

  if (numero >= 5) {
    cout << "V";
    numero -= 5;
  }

  if (numero == 4) {
    cout << "IV";
  } else {
    for (int i = 0; i < numero; i++) {
      cout << "I";
    }
  }
    
  cout << endl;
  return 0;
}

