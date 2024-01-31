#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {

  // Declaração das variáveis
    int diaInicio, horaInicio, minutoInicio, segundoInicio;
    int diaFim, horaFim, minutoFim, segundoFim;
    string diaIn, diaF;
    string pontos;
  // Leitura dos dados de entrada
    cin >> diaIn >> diaInicio >> horaInicio >> pontos >> minutoInicio >> pontos >> segundoInicio;
    cin >> diaF >> diaFim >> horaFim >> pontos >> minutoFim >> pontos >> segundoFim;

  // Converte as horas, minutos e segundos em segundos
    int diast = (diaFim - diaInicio) * 86400;
    int segundosInicio = (horaInicio * 3600) + (minutoInicio * 60) + segundoInicio;
    int segundosFim = (horaFim * 3600) + (minutoFim * 60) + segundoFim + diast;

  // Calcula a duração do evento em segundos
    int duracao = segundosFim - segundosInicio;

  // Converte a duração em dias, horas, minutos e segundos
    int dias = duracao / 86400;
    duracao -= dias * 86400;
    int horas = duracao / 3600;
    duracao -= horas * 3600;
    int minutos = duracao / 60;
    int segundos = duracao % 60;

  // Imprime a duração do evento
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

  return 0;
}

