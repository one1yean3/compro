#include<stdio.h>
double avg1(int* arr)
{
    double sum=0;
    for (int i=0;i<8;i++){
        sum+=arr[i];
    }
    double avg=sum/8;
    return avg;
}
double var1(int* arr,double avg)
{
    double sum=0;
    for (int i=0;i<8;i++){
        sum+=(arr[i]-avg)*(arr[i]-avg);
    }
    double var=sum/(8-1);
    return var;
}
void main()
{
    int arr[8];
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    double avg=avg1(arr);
    double var=var1(arr,avg);
    printf("%.2f %.2f",avg,var);
}
