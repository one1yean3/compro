#include<stdio.h>
main()
{
    int i,x,min,max,min1,max1,min2,max2;
    i=1;
    max=0;
    min=99999;
    while (i<=8){
    scanf("%d",&x);
    if (x>0){
        if (x>max){
            max=x;
            }
        }
        if (x<min){
            min=x;
        }
    i++;
    }
    printf("%d\n%d",max,min);
    }

