#include<stdio.h>
#include<limits.h>
void main()
{
    int N,M,sum=0;
    int max=INT_MIN,min=INT_MAX;
    scanf("%d %d",&N,&M);
    int ar[N];
    for(int i=0;i<N;i++){
        ar[i]=0;
    }
    for(int r=0;r<M;r++){
        for(int wrk=0;wrk<N;wrk++){
            int x;
            scanf("%d",&x);
            if(x>10){
                x=10;
            }
            int price= x*40;
            sum+=price;
            ar[wrk]+=price;
        }
    }
    printf("%d\n",sum);
    int mini,maxi;
    for(int i=0;i<N;i++){
        if(ar[i]<min){
            min=ar[i];
            mini=i+1;
        }
        if(ar[i]>max){
            max=ar[i];
            maxi=i+1;
        }
    }
    printf("%d\n%d",maxi,mini);

}
