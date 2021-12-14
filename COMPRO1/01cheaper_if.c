#include<stdio.h>
void main()
{
    float Ap,Bp,A,B;
    scanf("%f %f",&A,&Ap);
    scanf("%f %f",&B,&Bp);
    int want;
    scanf("%d",&want);
    int aa,bb;
    aa = want / A;
    bb = want / B;
    if(aa*A<want){
        aa+=1;
    }
    if(bb*B<want){
        bb+=1;
    }
    float suma;
    float sumb;
    suma = aa * Ap;
    sumb = bb * Bp;
    if(suma>sumb){
        printf("B : %.2f",sumb);
    }
    else if(sumb>suma){
        printf("A : %.2f",suma);
    }
    else{
        printf("equal : %.2f",suma);
    }

}
