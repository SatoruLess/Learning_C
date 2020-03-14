#include <stdio.h>
#include <stdlib.h>


// for(int i=0;i<M;i++)
//         printf("%c %d\n",(A+i)->Tipo,(A+i)->Num);
//     ;

typedef struct LES {
    int Num;
    char Tipo;
}LES;

int * Vector_Final;  

void Array_LES(LES *A,int M){
    int i;
    for(i=0;i< M;i++){
        scanf("%c %d ",&(A+i)->Tipo,&(A+i)->Num);
    };
}
void *Final_Vector(int A,int M){

    int h = 1;
    for(int i=0;i < m;i++){
        if(i==0){
            *(Vector_Final) = A;
        }
        for(int j=0;j < M;j++)
    }


}


int main (){
    int N,M=0,i,j;
    LES *P;

    scanf("%d ",&N);
    Vector_Final = malloc(N* sizeof (int));
    P = malloc(N * sizeof (LES));
    Array_LES(P,N);
    for(i=0;i < N;i++){
        if((P+i)-> Tipo == 'I'){
            for(j=0;j < N;j++){
                if(((P+j)-> Tipo == 'E')&&((P+j)-> Num == (P+i)-> Num)){
                    M = 1;
                }
            }
            if(M==1){
                Final_Vector((P+i)-> Num,N)
            }
            M = 0;
        }
    }
    return 0;
}

