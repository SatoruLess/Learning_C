#include <stdio.h>

int main() {
  int N,i,T=0;
  scanf("%d",&N);
  for (i = 1; i < N; i++){
    if(N%i==0){
      T = T + i;
        }
  };
  if(T==N){
    printf("SIM\n");
  }
  else {
    printf("NAO\n");
  }
  return 0;
}
