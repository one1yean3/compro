#include<stdio.h>
#include<limits.h>
void main()
{
    int x,max=INT_MIN,min=INT_MAX,sum;
    while(1){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        if(x%2==1){
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
    }
    sum=max-min;
    printf("%d\n%d\n%d",max,min,sum);
}
