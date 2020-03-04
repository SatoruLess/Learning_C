#include <stdio.h>
#include <stdlib.h>

int main() {
  int N=60,i,*V,T,C=0;
  V = malloc(60 * sizeof (int));

  for (i = 0; i < N; i++){
    scanf("%d",&V[i]);
    C++;
    if(V[i] < 0){
      break;
    }
  };
  T = V[0];
  for (i=0;i < (C-1);i++){
      if(V[i] < T){
        T = V[i];
      }
  }
  if (C==1){
      printf("\nnenhum numero informado");
  }
  else{
     printf("\n%d\n",T);
  }
  return 0;
}
