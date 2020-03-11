  
#include <stdio.h>
#include <stdlib.h>

typedef struct Tcomplex {
    int Real;
    int Imag;

} Tcomplex;

Tcomplex complexo(int A, int B){
    Tcomplex C;
    C.Real = A;
    C.Imag = B;
    return C;
}
Tcomplex soma(Tcomplex C1,Tcomplex C2){
    Tcomplex C3;
    C3.Real = C1.Real + C2.Real;
    C3.Imag = C1.Imag + C2.Imag;
    return C3;
}
Tcomplex sub(Tcomplex C1,Tcomplex C2){
    Tcomplex C3;
    C3.Real = C1.Real - C2.Real;
    C3.Imag = C1.Imag - C2.Imag;
    return C3;
}
Tcomplex multi(Tcomplex C1,Tcomplex C2){
    Tcomplex C3;
    C3.Real = (C1.Real*C2.Real) - (C1.Imag*C2.Imag);
    C3.Imag = (C1.Real*C2.Imag) + (C1.Imag*C2.Real);
    return C3;
}
Tcomplex div(Tcomplex C1,Tcomplex C2){
    Tcomplex C3;
    C3.Real = ((C1.Real*C2.Real)+(C1.Imag*C2.Imag))/((C2.Real*C2.Real)+(C2.Imag*C2.Imag));
    C3.Imag = ((C2.Real*C1.Imag)-(C1.Real*C2.Imag))/((C2.Real*C2.Real)+(C2.Imag*C2.Imag));
    return C3;
}

int main (){
    
    int r1, r2, i1, i2;
    char a1, a2, a3;
    Tcomplex C1,C2,C3;

    while (scanf ("%d", &r1) != EOF) {
        scanf ("%d %c %c %d %d %c", &i1, &a1, &a2, &r2, &i2, &a3);
        C1 = Complexo(r1,i1);
        C2 = Complexo(r2,i2);
        if (a2 == '+'){
            C3 = soma(C1,C2);
        }
        if (a2 == '-'){
            C3 = sub(C1,C2);
        }
        if (a2 == '*'){
            C3 = mult(C1,C2);
        }
        if (a2 == '/'){
            C3 = div(C1,C2);
        }
        printf("%d %d%c",C3.Real,C3.Imag,a1);
    }
    return 0;
}
