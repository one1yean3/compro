#include<stdio.h>
void main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int ar[N+1];
    for(int i=0;i<=N+1;i++){
        ar[i]=0;
        printf("%d ",ar[i]);
    }
    printf("\n");

    int a,b;
    for(int i=0;i<M;i++){
        scanf("%d",&a);
        ar[a]=1;
        for(int i=1;i<N+1;i++){
            printf("%d ",ar[i]);
        }
        printf("\n");

        scanf("%d",&b);
        ar[b]=2;
        for(int i=1;i<N+1;i++){
            printf("%d ",ar[i]);
        }
        printf("\n");
    }

}
