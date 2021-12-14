#include<stdio.h>
#include<limits.h>
void main()
{
    int N,x=INT_MIN,g;
    scanf("%d",&N);
    int inp[N];
    for(int i=0;i<N;i++){
        scanf("%d",&inp[i]);
        if(inp[i]>x){
            x=inp[i];
            g=x;
        }
    }
    for(int i=0;i<g;i++){
        for(int c=0;c<N;c++){
            if(inp[c]<x){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        x--;
        printf("\n");
    }
}
