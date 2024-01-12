#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    double a, b, c, med;
    for(i=1; i <= N; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        med = ((a * 2) + (b * 3) + (c * 5))/ 10;
        printf("%.1lf\n", med);
    }
    
 
    return 0;
}