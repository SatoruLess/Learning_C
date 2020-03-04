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

int ** Transposta(int **Mat1,int N,int M){
    int i,j,**S;
    S = malloc(M*sizeof(int *));
    for (int i = 0; i < M; i++) {
        S[i] = malloc(N*sizeof(int));
    };

    for(i=0;i<N;i++){
      for(j = 0; j < M; j++){
        S[j][i] = Mat1[i][j];
      }
    };

    return S;
}
int main() {
    int M,N=0,j,i,**M1,**M2,X=0;
    
    scanf("%d",&N);
    scanf("%d",&M);
    M1 = Mk_Matriz(N,M); 
    M2 = Transposta(M1,N,M);
    printf("\n");
    Print_Matriz(M2,M,N);

    return 0;
}
