#include<stdio.h>
#include<limits.h>
void main()
{
    int x,max=INT_MIN;
    scanf("%d",&x);
    int inp[x];
    for(int i=0;i<x;i++){
        scanf("%d",&inp[i]);
        if(inp[i]>max){
            max=inp[i];
        }
    }
    for(int i=0;i<max;max--){
        for(int c=0;c<x;c++){
            if(inp[c]<max){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}
