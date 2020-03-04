#include <stdio.h>

int main(){
  float a, p, imc;
  scanf("%f %f", &a, &p);
  imc = p/(a*a);
  if (imc < 16) {
    printf("Magreza grave\n");
  }
  else if (imc < 17) {
    printf("Magreza moderada\n");
  }
  else if (imc < 18.5) {
    printf("Magreza leve\n");
  }
  else if (imc < 25) {
    printf("Saudavel\n");
  }
  else if (imc < 30) {
    printf("Sobrepeso\n");
  }
  else if (imc < 35) {
    printf("Obesidade Grau I \n");
  }
  else if (imc < 40) {
    printf("Obesidade Grau II (severa)\n");
  }
  else{
    printf("Obesidade Grau III (morbida)\n");
  }
}
