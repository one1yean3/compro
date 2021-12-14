#include<stdio.h>
void main()
{
    int ar[101]={0};
    //scan N,K
    int N,K;
    scanf("%d %d",&N,&K);


    int x;
    for(int i=0 ; i<K ; i++){
        scanf("%d",&x);
        ar[x] += 1 ;
    }

    int max = 0;
    int maxN;
    for(int i=1 ; i<=N ;i++){
        if(ar[i] > max ){
            max = ar[i];
            maxN = i ;
        }
    }

    //print
    printf("%d\n%d",maxN,max);




}
