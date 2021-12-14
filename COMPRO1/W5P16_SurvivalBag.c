#include <stdio.h>
main()
{
    int x,y,z,x1,y1,z1,x2,y2,z2,lower,lowest;
    scanf("%d %d %d",&x,&y,&z);
    x1=x/3;
    y1=y/4;
    z1=z/2;
    if (x1<=y1){
        lower=x1;
        if (x1<=z1){
            lowest=lower;
        }
        else{
            lowest=z1;
        }
    }
    else if (y1<x1){
        lower=y1;
        if (y1<z1){
            lowest=lower;
        }
        else{
            lowest=z1;
        }
    }
    else{
        lowest=z1;
    }
    x2=x-(lowest*3);
    y2=y-(lowest*4);
    z2=z-(lowest*2);
    printf("%d %d %d %d",lowest,x2,y2,z2);
}
