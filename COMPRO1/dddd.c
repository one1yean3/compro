#include<stdio.h>
main()
{
    int x,y,z,x1,y1,z1,lower,lowest,x2,y2,z2,fx,fy,fz;
    scanf("%d %d %d",&x,&y,&z);
    x1=x/3;
    y1=y/4;
    z1=z/2;
    if (x1<y1){
        lower=x1;
    }
    else{
        lower=y1;
    }
    if (lower<z1){
        lowest=lower;
    }
    else{
        lowest=z1;
    }
    x2=lowest*3;
    y2=lowest*4;
    z2=lowest*2;
    fx=x-x2;
    fy=y-y2;
    fz=z-z2;
    printf("%d %d %d %d",lowest,fx,fy,fz);
}
