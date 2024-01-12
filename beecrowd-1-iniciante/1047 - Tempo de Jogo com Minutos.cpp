#include <stdio.h>
#include <math.h>

int main() {

    int h1, m1, h2, m2, cal1, cal2, cal3, h3, m3;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    cal1 = (h1 * 60) + m1;
    cal2 = (h2 * 60) + m2;
    cal3 = cal2 - cal1;

     if(cal2 <= cal1){
       cal3 = cal3 + (24 * 60);
    }

    h3 = cal3/60;
    m3 = cal3 % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h3, m3);



    return 0;
}
