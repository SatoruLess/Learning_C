#include <stdio.h>

int main() {
  int N,i,C=0;
  scanf("%d",&N);
  for (i = 1; i <= N; i++){
    if(N%i==0){
        if(i%2==0){
          C++;
      }}
  };
  printf("%d\n",C);
  return 0;
}
