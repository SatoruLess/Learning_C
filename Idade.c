#include <stdio.h>

int main() {
  int A,B,C;
  char *H;
  scanf("%d %s %d",&A,H,&B);
  C = A - B;
  printf("%s, voce completa %d anos de idade neste ano.\n",H,C);
  return 0;
}
