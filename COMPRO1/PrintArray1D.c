#include<stdio.h>
void main()
{
    int N,target;
    scanf("%d",&N);
    int inp[N];
    for(int i=0;i<N;i++){
        scanf("%d",&inp[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<N;i+=target){
        printf("%d ",inp[i]);
    }
}
