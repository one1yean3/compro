#include<stdio.h>
void main()
{
    int M,N,K,R,C;
    scanf("%d %d\n",&M,&N);
    int park[M+1][N+1];
    for(int row=1;row<=M;row++){
        for(int col=1;col<=N;col++){
            park[row][col]=0;
        }
    }
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        scanf("%d %d",&R,&C);
        park[R][C]++;
        if(park[R][C]>1){
            park[R][C]=1;
        }
    }
    for(int row=1;row<=M;row++){
        for(int col=1;col<=N;col++){
            if(park[row][col]==1){
                printf("x");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
}
