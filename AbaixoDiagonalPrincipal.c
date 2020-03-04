#include <stdio.h>
#include <stdlib.h>

int ** Mk_Matriz(int N,int M){
    int **Mat;
    Mat = malloc(N*sizeof(int *));
    for (int i = 0; i < N; i++) {
        Mat[i] = malloc(M*sizeof(int));
    };
    for (int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d",&Mat[i][j]);
        }
    };
    return Mat;
}
void Print_Matriz(int **Mat,int N,int M){
    int i,j;
    for (i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            printf("%d ",Mat[i][j]);
        }
        printf("\n");
    };
}

int Soma_D(int **Mat1,int N){
  int i,j,S=0,H=1;

  for(j=0;j<N;j++){
    for(i = H; i < N; i++){
      S = S + Mat1[i][j];
    }
    H++;
  }
  return S;
}

float Multi_D(int **Mat1,int N){
  int i,j,S=0,H=1,C=0;
  float M;

  for(j=0;j<N;j++){
    for(i = H; i < N; i++){
      M = M + Mat1[i][j];
      C++;
    }
    H++;
  }
  return M/C;
}
  
    
int main() {
    int N=0,j,i,**M1,S,X=0;
    char A;
    float M;
    
    scanf("%c",&A);
    scanf("%d",&N);

    M1 = Mk_Matriz(N,N);

    if (A == 'S'){
      S = Soma_D(M1,N);
      printf("\n\n");
      printf("%d",S);
    }
    if (A == 'M'){
      M = Multi_D(M1,N);
      printf("\n\n");
      printf("%0.1f",M);
    }
  
    return 0;
}
