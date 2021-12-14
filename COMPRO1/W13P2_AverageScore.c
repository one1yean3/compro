#include<stdio.h>
void main()
{
    int x;
    double N,sum=0;
    scanf("%lf",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        sum+=x;
    }
    printf("%lf",sum/N);
}
