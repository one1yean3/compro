#include<stdio.h>
void main()
{
    int K,N,x,countpos=0,maxpos=-1,maxshood=0;
    scanf("%d %d",&K,&N);
    for(int i=1;i<=N;i++){
        for(;;){
            scanf("%d",&x);
            if(x==0){
                break;
            }
            if(x>0){
                if(x%K==0){
                    countpos++;
                }
            }
        }
        if(countpos>=maxpos){
            maxshood=i;
            maxpos=countpos;
        }
        countpos=0;
    }
    printf("%d %d",maxshood,maxpos);
}
