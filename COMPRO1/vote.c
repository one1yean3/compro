#include<stdio.h>
#include<limits.h>
void main()
{
    int N,K,inpN[101],inpSN[101],max=INT_MIN,win;
    scanf("%d %d",&N,&K);
    int inpK[K];
    for(int i=1;i<=N;i++){
        inpN[i]=i;
        inpSN[i]=0;
    }
    for(int i=1;i<=K;i++){
        scanf("%d",&inpK[i]);
        for(int c=1;c<=N;c++){
            if(inpN[c]==inpK[i]){
                inpSN[c]++;
            }
        }
    }
    for(int i=1;i<=N;i++){
        if(inpSN[i]>max){
            max=inpSN[i];
            win=i;
        }
    }
    printf("%d\n%d",win,max);
}
