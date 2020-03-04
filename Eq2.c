#include <stdio.h>
#include <math.h>

int main() {
  float A,B,C,D,R1,R2;
  scanf("%f %f %f",&A,&B,&C);
  D = (B*B)- 4*A*C;
  R1 = ((-B) + sqrt(D))/(2*(A));
  R2 = ((-B) - sqrt(D))/(2*(A));
  printf("%f %f\n"R1,R2);
  return 0;
}
