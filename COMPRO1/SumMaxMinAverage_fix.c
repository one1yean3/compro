#include<stdio.h>
#include<limits.h>
void main()
{
    int N,x,d,g=0,max=INT_MIN,maxe=0,min=INT_MAX,mine=0;
    double c=0;
    for(;;){
        scanf("%d",&N);
        if(N<=0){
            break;
        }
        else{
            c++;
        }
        d=0;
        for(int i=0;i<N;i++){
            scanf("%d",&x);
            d+=x;
        }
        printf("%d\n",d);
        if(d>max){
            max=d;
            maxe=c;
        }
        if(d<min){
            min=d;
            mine=c;
        }
        g+=d;
    }
    c=g/c;
    printf("%d %d\n",maxe,max);
    printf("%d %d\n",mine,min);
    printf("%.2f",c);
}
