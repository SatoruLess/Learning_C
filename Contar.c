#include <stdio.h>
#include <stdlib.h>

int main() {
  int N,i,*V,X=0,C=0;

  scanf("%d",&N);
  V = malloc(N * sizeof (int));

  for (i = 0; i < N; i++){
    scanf("%d",&V[i]);
    if(V[i] < 0){
      break;
    }
  };
  scanf("%d",&X);
  for (i=0;i < N;i++){
      if(V[i] >= X){
        C++;
      }
  };
  printf("%d\n",C);
  return 0;
}
