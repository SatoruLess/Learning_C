#include <stdio.h>
#include <stdlib.h>

int SomaVet(int V[],int N){
  int S=0;
    for(int i=0;i<N;i++){
      S = S + V[i];
  };
  return S;
}
int main() {
  int N=0,i,*V,X=0,S;

  scanf("%d",&N);
  V = malloc(N * sizeof (int));
  for (i = 0; i < N; i++){
    scanf("%d",&V[i]);
  };
  S = SomaVet(V,N);
  printf("%d",S);
  return 0;
}
