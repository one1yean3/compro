#include<stdio.h>
double average(int* ar,int N)
{
    double sum=0;
    for(int i=0;i<N;i++){
        sum+=ar[i];
    }
    double avg=sum/N;
    return avg;
}
double variance(int* ar,double avg,int N)
{
    double sum=0;
    for(int i=0;i<N;i++){
        sum+=(ar[i]-avg)*(ar[i]-avg);
    }
    double var=sum/(N-1);
    return var;
}
void main()
{
    int N;
    scanf("%d",&N);
    int ar[N];
    for(int i=0;i<N;i++){
        scanf("%d",&ar[i]);
    }
    double avg=average(ar,N);
    double var=variance(ar,avg,N);
    printf("%.2f %.2f",avg,var);
}
