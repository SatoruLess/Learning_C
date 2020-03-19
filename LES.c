#include <stdio.h>
#include <stdlib.h>


// for(int i=0;i<M;i++)
//         printf("%c %d\n",(A+i)->Tipo,(A+i)->Num);
//     ;

typedef struct LES {
    int Num;
    char Tipo;
}LES;

int * Vector_Final,C=0;

void Array_LES(LES *A,int M){
    int i;
    for(i=0;i< M;i++){
        scanf("%c %d ",&(A+i)->Tipo,&(A+i)->Num);
    };
}
void print_v (int C){

    for (int i=0;i <= C;i++){
        printf("%d\n",*(Vector_Final + i));
    }
}
void Mover_direita(int C,int n){
    int i,g=0;

    for(i = C;i>n;i--){

        *(Vector_Final + i) = *(Vector_Final + i -1);
    }
}
void Mover_Esquerda(int C,int n){
    int i,g=0;

    for(i = n;i<C;i++){

        *(Vector_Final + i) = *(Vector_Final + i + 1);

    }
}
int Inserir (int A,int C){

    int h = 0,S=0;
    for(int i=0;i <= C;i++){
        if(C==0){
            *(Vector_Final) = A;
            S=1;
        }
        if(A==*(Vector_Final+i)){
            break;
        }
        else if(A < *(Vector_Final+i)){
           Mover_direita(C,h);
           *(Vector_Final+i) = A;
           S=1;
           break;
        }
        else if(i==C){
            *(Vector_Final+i) = A;
            S=1;
            break;
        }
        h++;
    }
    return S;
}

int Remover (int A,int C){

    int h = 0,S=0;
    for(int i=0;i < C;i++){
        if(A == *(Vector_Final+i)){
           Mover_Esquerda(C,h);
           S = 1;
           break;
        }
        else{
        }
        h++;
    }
    return S;
}

int main (){
    int N,M=0,i,j,C=0,Sinalizador =0;
    LES *P;

    scanf("%d ",&N);
    Vector_Final = malloc(N* sizeof (int));
    P = malloc(N * sizeof (LES));
    Array_LES(P,N);
    for (int i=0;i <= N;i++){
        if((P+i)->Tipo == 'I'){
            Sinalizador = Inserir((P+i)->Num,C);
            C = C + Sinalizador;
        }
        else {
            Sinalizador = Remover((P+i)->Num,C);
            C = C - Sinalizador;
        }
    }
    print_v(C-1);

    return 0;
}
