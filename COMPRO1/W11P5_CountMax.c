#include<stdio.h>
#include<limits.h>
int countMax(int* arData, int N)
{
    int max=INT_MIN,n=0,maxn;
    for(int i=0;i<N;i++){
        if(arData[i]>max){
            max=arData[i];
        }
    }
    for(int i=0;i<N;i++){
        if(arData[i]==max){
            n++;
        }
    }
    printf("%d",n);
}

void main()
{
    int N;
    scanf("%d",&N);
    int arData[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arData[i]);
    }
    countMax(arData,N);
}
