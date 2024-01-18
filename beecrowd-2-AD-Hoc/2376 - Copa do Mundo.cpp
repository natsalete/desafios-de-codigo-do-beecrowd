#include <iostream>

using namespace std;

char oitavas[] = "ABCDEFGHIJKLMNOP", quartas[8], semifinal[4], final[2], ganhador[2];

void rodada(int jogos, char *times, char *ganhadores)
{
  int i, primeiro, segundo;

  for (i = 0; i < jogos; i ++) {

   cin >> primeiro >> segundo;

    if (primeiro > segundo)
      ganhadores[i] = times[i * 2];
    else
      ganhadores[i] = times[i * 2 + 1];
  }
}

int main()
{
  rodada(8, oitavas, quartas);
  rodada(4, quartas, semifinal);
  rodada(2, semifinal, final);
  rodada(1, final, ganhador);

  cout << ganhador << endl;
}
