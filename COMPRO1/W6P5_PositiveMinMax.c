#include<stdio.h>
main()
{
    int i,x,min,max;
    max=0;
    min=99999;
    for (i=1;i<=8;i++){
    scanf("%d",&x);
    if (x>0){
        if (x>max){
            max=x;
            }
        if (x<min){
            min=x;
        }
    }
    }
    printf("%d\n%d",max,min);
    }

