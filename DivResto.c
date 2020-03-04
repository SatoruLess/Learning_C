#include <stdio.h>

int main() {
  int A,B,C,D;
  scanf("%d",&A);
  B = A/3600;
  C = (A%3600)/60;
  D = (A%3600)%60;
  printf("%d:%d:%d\n",B,C,D);
  return 0;
}
