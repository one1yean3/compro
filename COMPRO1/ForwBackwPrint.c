#include<stdio.h>
void main()
{
    int N,target,x;
    scanf("%d",&N);
    int inp[N];
    for(int i=0;i<N;i++){
        scanf("%d",&inp[i]);
    }
    scanf("%d",&target);
    if(target<0){
        for(int i=N-1;i>=0;i--){
            printf("%d ",inp[i]+target);
        }
    }
    else{
        for(int i=0;i<N;i++){
            printf("%d ",inp[i]+target);
        }
    }
}
