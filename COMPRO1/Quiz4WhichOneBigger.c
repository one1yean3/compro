#include<stdio.h>
void main()
{
    int N,target,sum=0,n=0,sumn=0;
    scanf("%d",&N);
    int inp[N];
    for(int i=0;i<N;i++){
        scanf("%d",&inp[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<N;i++){
        if(inp[i]>target){
            sum+=inp[i];
        }
        else if(inp[i]<target){
            sumn+=inp[i];
        }
    }
    if(sumn>sum){
        printf("%d",sumn);
    }
    else{
        printf("%d",sum);
    }
}
