#include<stdio.h>
void main()
{
    int N,TH=0,T=0,MA=0,FI=0,click;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&click);
        if(click==1){
            TH++;
        }
        if(click==2){
            T++;
        }
        if(click==3){
            MA++;
        }
        if(click==4){
            FI++;
        }
    }
    if(TH>T&&TH>MA&&TH>FI){
        printf("Thailand won with a score of %d",TH);
    }
    if(T>TH&&T>MA&&T>FI){
        printf("Taiwan won with a score of %d",T);
    }
    if(MA>TH&&MA>T&&MA>FI){
        printf("Malaysia won with a score of %d",MA);
    }
    if(FI>TH&&FI>T&&FI>MA){
        printf("Finland won with a score of %d",FI);
    }
}
