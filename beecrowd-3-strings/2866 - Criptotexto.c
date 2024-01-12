#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

    char mens[90];
    scanf("%s", mens);
    for(int i = strlen(mens); i >= 0; i--) {
        if(islower(mens[i])){
            printf("%c", mens[i]);
        }
    }
    printf("\n");
   }




    return 0;
}
