#include<stdio.h>
void main()
{
    int x,y,m,n,bm,sn,rem_x,rem_y,rem_x1,rem_y1,rem_x2,rem_y2,cm,dm;
    scanf("%d %d",&x,&y);
    scanf("%d %d",&m,&n);
    bm=m*2;
    sn=m*6;
    rem_x=x-bm;
    rem_y=y-sn;
    cm=n*1;
    dm=n*4;
    rem_x1=rem_x-cm;
    rem_y1=rem_y-dm;
    if(rem_x1<0||rem_y1<0){
        if(rem_x1<0){
            rem_x2=rem_x1*-1;
        }
        if(rem_y1<0){
            rem_y2=rem_y1*-1;
        }
        printf("No %d %d",rem_x2,rem_y2);
    }
    else if(rem_x1>=0||rem_y1>=0){
        printf("Yes %d %d",rem_x1,rem_y1);
    }
}
