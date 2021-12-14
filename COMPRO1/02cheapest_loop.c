#include<stdio.h>
#include<limits.h>
void main()
{
    int N;
    scanf("%d",&N);
    float ar[N][2];
    int want;
    scanf("%d",&want);
    int shop=0;
    float min=INT_MAX;
    int aa;
    for(int i=0;i<N;i++){
        scanf("%f",&ar[i][0]);
        scanf("%f",&ar[i][1]);
        //printf("%f\n",ar[i][1]);
        aa = want / ar[i][0];
        if(aa*ar[i][0]<want){
            aa+=1;
        }
        float sum = aa*ar[i][1];
        if(sum<min){
            min=sum;
            shop=i+1;
        }
    }

    printf("%d : %.2f",shop,min);




}
