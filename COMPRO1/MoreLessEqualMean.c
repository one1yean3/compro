#include<stdio.h>
int inp[50000];
void main()
{
    int N,sum=0,avg,more=0,less=0,equal=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&inp[i]);
        sum+=inp[i];
    }
    avg=sum/N;
    for(int i=0;i<N;i++){
        if(inp[i]>avg){
            more++;
        }
        if(inp[i]<avg){
            less++;
        }
        if(inp[i]==avg){
            equal++;
        }
    }
    printf("%d\n%d %d %d",avg,more,less,equal);
}
