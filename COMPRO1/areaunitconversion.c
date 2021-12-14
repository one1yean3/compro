#include<stdio.h>
void main()
{
    int x,y,r,w,area;
    scanf("%d %d",&x,&y);
    area=(x*400)+y;
    r=area/400;
    w=area-(r*400);
    if(r>0){
        printf("%d r ",r);
    }
    if(w>0){
        printf("%d w",w);
    }
}
