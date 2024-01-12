#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,nota100,nota50,nota20,nota10,nota5,nota2,m100,m50,m25,m10,m5,m1,aux,B;
   double A, E;

   scanf ("%lf",&A);
   N = A;
   nota100 = N/100;
   aux = N % 100;
   nota50 = aux/50;
   aux = aux % 50;
   nota20 = aux/20;
   aux = aux % 20;
   nota10 = aux/10;
   aux =aux % 10;
   nota5 = aux/5;
   aux = aux % 5;
   nota2 = aux/2;
   m100 = aux % 2;
   E = A *100;
   B=(int) E;
   aux = B % 100;
   m50 = aux / 50;
   aux = aux % 50;
   m25=aux/25;
   aux=aux % 25;
   m10=aux/10;
   aux=aux % 10;
   m5=aux/5;
   m1=aux % 5;
   printf ("NOTAS:\n");
   printf ("%d nota(s) de R$ 100.00\n",nota100);
   printf ("%d nota(s) de R$ 50.00\n",nota50);
   printf ("%d nota(s) de R$ 20.00\n",nota20);
   printf ("%d nota(s) de R$ 10.00\n",nota10);
   printf ("%d nota(s) de R$ 5.00\n",nota5 );
   printf ("%d nota(s) de R$ 2.00\n",nota2);
   printf ("MOEDAS:\n");
   printf ("%d moeda(s) de R$ 1.00\n",m100);
   printf ("%d moeda(s) de R$ 0.50\n",m50);
   printf ("%d moeda(s) de R$ 0.25\n",m25);
   printf ("%d moeda(s) de R$ 0.10\n",m10);
   printf ("%d moeda(s) de R$ 0.05\n",m5);
   printf ("%d moeda(s) de R$ 0.01\n",m1);
   
   return 0;

}
