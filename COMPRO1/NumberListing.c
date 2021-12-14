#include<stdio.h>
void main()
{
    int N,x;
    scanf("%d",&N);
    int inp[10001];
    for(int i=0;i<10001;i++){
        inp[i]=0;
    }
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        inp[x]++;
    }
    for(int i=0;i<10001;i++){
        if(inp[i]>0){
            printf("%d ",i);
        }
    }
}
