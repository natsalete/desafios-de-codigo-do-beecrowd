#include <stdio.h>
#include <stdlib.h>

int main()
{

 int n = 1, cont;
 char c, dir;


 while (n != 0){
  scanf(" %d", &n);
  dir = 'N';

  for(int i = 0; i < n; ++i)
  {
   scanf(" %c", &c);

   if(c == 'D' && dir == 'N'){
    dir = 'L';
   }else if(c == 'E' && dir == 'N'){
    dir = 'O';
   }else if(c == 'D' && dir == 'O'){
    dir = 'N';
   }else if(c == 'E' && dir == 'O'){
    dir = 'S';
   }else if(c == 'D' && dir == 'L'){
    dir = 'S';
   }else if(c == 'E' && dir == 'L'){
    dir = 'N';
   }else if(c == 'D' && dir == 'S'){
    dir = 'O';
   }else if (c == 'E' && dir == 'S'){
    dir = 'L';
   }
  }

  if (n != 0){
  printf("%c\n", dir);
 }

 }while (n != 0);


 return 0;
}

