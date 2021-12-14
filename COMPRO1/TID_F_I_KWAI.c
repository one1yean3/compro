#include<stdio.h>
void main()
{
    int P,N,sumx=0;
    scanf("%d %d",&P,&N);
    int a[N][N],sum[N];
    for(int i=0;i<N;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
        sum[i]=a[i][1]*P;
        sum[i]-=a[i][0];
        sumx+=sum[i];
        printf("%d\n",sum[i]);
    }
    printf("%d",sumx);
}
