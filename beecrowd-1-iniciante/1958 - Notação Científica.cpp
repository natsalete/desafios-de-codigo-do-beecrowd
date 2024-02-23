#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
  double numero;
  cin >> numero;

  // Configura a formatação da saída:
  // Mostra o sinal da mantissa
  cout << setiosflags(ios::showpos);
  // Mostra 4 casas decimais na mantissa
  cout << setprecision(4);
  // Usa o caractere 'E' para separar a mantissa do expoente
  cout << setiosflags(ios::scientific);
  // Mostra o sinal do expoente
  cout << setiosflags(ios::showpos);
  // Mostra o expoente com pelo menos 2 dígitos
  cout << setw(2);
  // Converte o caractere 'e' para maiúsculo
  cout << uppercase;

  // Exibe o número formatado
  cout << numero << endl;

  return 0;
}
