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

int ** SomaMat(int **Mat1,int **Mat2,int N){
    int i,j,**S;
    S = malloc(N*sizeof(int *));
    for (int i = 0; i < N; i++) {
        S[i] = malloc(N*sizeof(int));
    };

    for(i=0;i<N;i++){
      for(j = 0; j < N; j++){
        S[i][j] = Mat1[i][j] + Mat2[i][j];
      }
    };

    return S;
}
int main() {
    int N=0,j,i,**M1,**M2,X=0,**S;
    
    scanf("%d",&N);
    M1 = Mk_Matriz(N,N); 
    M2 = Mk_Matriz(N,N);

    S = SomaMat(M1,M2,N);
    
    printf("\n");
    Print_Matriz(S,N,N);

    return 0;
}
