#include<stdio.h>
void main()
{
    int N,num,g=0;
    scanf("%d",&N);
    int inp[N];
    for(int i=1;i<=N;i++){
        scanf("%d",&inp[i]);
    }
    scanf("%d",&num);
    for(int i=1;i<=N;i++){
        if(num==inp[i]){
            printf("%d ",i);
            g++;
        }
    }
    if(g==0){
        printf("0");
    }
}
