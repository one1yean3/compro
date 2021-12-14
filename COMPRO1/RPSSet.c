#include<stdio.h>
void main()
{
    int N,x,P1=0,P2=0;
    scanf("%d",&N);
    int array[N];
    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        if(array[i]==1&&x==3){
            P1++;
        }
        else if(array[i]==3&&x==1){
            P2++;
        }
        else if(array[i]>x){
            P1++;
        }
        else if(array[i]<x){
            P2++;
        }
    }
    printf("%d %d\n",P1,P2);
    if(P1>P2){
        printf("1");
    }
    else if(P1<P2){
        printf("2");
    }
    else{
        printf("0");
    }
}
