#include<stdio.h>
void main()
{
    int N,K,n,d,i,G,b=1;
    scanf("%d",&K);
    K=K*100;
    G=K;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&n);
        while(K-n<0){
            K=K+G;
            b++;
        }
        if(K-n>=0){
            K=K-n;
            printf("%d\n",b);
        }
    }
}
