#include <iostream>
#include<math.h>
 
int main() {
 
    double area, raio, n;
    
      scanf("%lf", &raio);
      n = 3.14159;
      area = pow (raio,2) * n;

      printf("A=%.4lf\n", area);
  
    return 0;
}