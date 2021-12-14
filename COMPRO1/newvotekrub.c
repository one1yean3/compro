#include<stdio.h>
#include<limits.h>
void main()

{
    int N,K,x,votemax=INT_MIN,nummax;
    scanf("%d %d",&N,&K);
    int inp[N+1];
    for(int i=1;i<=N;i++){ //CLEAN
        inp[i]=0;
    }
    for(int i=1;i<=K;i++){ //SCAN K
        scanf("%d",&x);
        inp[x]++;
    }
    for(int i=1;i<=N;i++){
        if(inp[i]>votemax){
            votemax=inp[i]; //votecount
            nummax=i;  //nummax
        }
    }
    printf("%d\n%d",nummax,votemax);

}
