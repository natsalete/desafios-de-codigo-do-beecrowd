#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
     char str1[] = "vertebrado ave carnivoro";
     char str2[] = "vertebrado ave onivoro";
     char str3[] = "vertebrado mamifero onivoro";
     char str4[] = "vertebrado mamifero herbivoro";
     char str5[] = "invertebrado inseto hematofago";
     char str6[] = "invertebrado inseto herbivoro";
     char str7[] = "invertebrado anelideo hematofago";
     char str8[] = "invertebrado anelideo onivoro";

     char palavra1[15] = "";
     char palavra2[15] = "";
     char palavra3[15] = "";
     char pal_final[45] = "";

    scanf("%[^\n]%*c", palavra1);
    strcpy( pal_final, palavra1);
    strncat(pal_final , " ", 1);
    

    scanf("%[^\n]%*c", palavra2);
    strcat( pal_final, palavra2);
    strncat(pal_final , " ", 1);
    

    scanf("%[^\n]%*c", palavra3);
    strcat( pal_final, palavra3);
    

    if((strcmp(pal_final, str1) == 0)){
        printf("aguia\n");
    }else if((strcmp(pal_final, str2) == 0)){
        printf("pomba\n");
    }else if((strcmp(pal_final, str3) == 0)){
        printf("homem\n");
    }else if((strcmp(pal_final, str4) == 0)){
        printf("vaca\n");
    }else if((strcmp(pal_final, str5) == 0)){
        printf("pulga\n");
    }else if((strcmp(pal_final, str6) == 0)){
        printf("lagarta\n");
    }else if((strcmp(pal_final, str7) == 0)){
        printf("sanguessuga\n");
    }else if((strcmp(pal_final, str8) == 0)){
        printf("minhoca\n");
    }


}
