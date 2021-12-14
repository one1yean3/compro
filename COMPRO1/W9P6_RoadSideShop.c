#include<stdio.h>
#include<limits.h>
void main()
{
    int N,K,sum=0,summax=INT_MIN,amount,c,g=1;
    scanf("%d %d",&N,&K);
    int inp[10000];
    for(int i=1;i<=N;i++){
        scanf("%d",&inp[i]);
    }
    amount=N-(2*K);
    c=(2*K)+1;
    for(int i=1;i<=amount;i++){
        sum=0;
        for(g=i;g<=c;g++){
            sum+=inp[g];
            //printf("sum=%d\n",sum);
        }
        if(sum>summax){
            summax=sum;
        }
        c++;
        //printf("reset\n");
    }
    printf("%d",summax);
}
