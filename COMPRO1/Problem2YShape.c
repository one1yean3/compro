#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int g;
    if(x%2==0){
        g=x-1;
    }
    else{
        g=x-2;
    }
    int c;
    for(int i=0;i<=x;i++){
        if(i<x/2){
            for(int d=0;d<i;d++){
                printf(" ");
            }
            printf("%d",i);
            for(int r=0;r<g;r++){
                printf(" ");
            }
            g-=2;
            printf("%d",i);
            c=i;
        }
        else{
            for(int d=0;d<=c;d++){
                printf(" ");
            }
            printf("%d",i);
        }
        printf("\n");
    }
}
