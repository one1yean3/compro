#include<stdio.h>
void main()
{
    int A[100];
    int B[100];
    int x,Ac=0,Bc=0,ana=0;
    for(int i=0;i<100;i++){
        A[i]=0;
        B[i]=0;
    }
    for(;;){
        scanf("%d",&x);
        if(x<0){
            break;
        }
        A[x]++;
        if(A[x]>1){
            A[x]=1;
        }
    }
    for(;;){
        scanf("%d",&x);
        if(x<0){
            break;
        }
        B[x]++;
        if(B[x]>1){
            B[x]=1;
        }
    }
    for(int i=0;i<100;i++){
        if(A[i]>0){
            Ac++;
            if(A[i]==B[i]){
                ana++;
            }
        }
        if(B[i]>0){
            Bc++;
        }
    }
    if(Ac==Bc&&Ac==ana){
        printf("A and B are anagrams");
    }
    else{
        printf("A and B are not anagrams");
    }
    printf("\nA %d\nB %d",Ac,Bc);
}
