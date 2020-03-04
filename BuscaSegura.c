#include <stdio.h>
#include <stdlib.h>


void VectorShow(int V[],int N){
  for(int i=0;i<N;i++){
    printf("%d ",V[i]);
  };
}
int * Ordenacao(int V[],int N){
  int T=0,H=1;
  while(H!=0){
    H=0;
    for(int i=0;i<N;i++){
      if (i!=0){
        if(V[i]<V[i-1]){
          T = V[i-1];
          V[i-1] = V[i];
          V[i]= T;
          H=1;
        }
      }
    }
    VectorShow(V,N);
    printf("\n");
  };
  return V;
}
int main() {
  int N=0,i,*V,X=0,*OV;

  scanf("%d",&N);
  V = malloc(N * sizeof (int));
  for (i = 0; i < N; i++){
    scanf("%d",&V[i]);
  };
  OV = Ordenacao(V,N);
  while(X!=-1){
    scanf("%d",&X);
    for (i=0;i < N;i++){
        if(V[i] == X){
          printf("SIM\n");
          break;
        }
    if(i==(N-1)){
      printf("CHAVE NAO ENCONTRADA\n");
    }
    }
  };
  return 0;
}
