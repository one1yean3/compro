#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int inp[N];
    for(int i=1;i<=N;i++){
        scanf("%d",&inp[i]);
    }
    for(int i=N;i>=1;i--){
        printf("%d ",inp[i]);
    }
}
