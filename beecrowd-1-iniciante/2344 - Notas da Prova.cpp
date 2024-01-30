#include <stdio.h>
#include <stdlib.h>

int main() {

  int N;
  scanf("%d", &N);

  switch (N) {
    case 0:
      printf("E\n");
      break;
    case 1 ... 35:
      printf("D\n");
      break;
    case 36 ... 60:
      printf("C\n");
      break;
    case 61 ... 85:
      printf("B\n");
      break;
    default:
      printf("A\n");
      break;
  }

  return 0;
}

