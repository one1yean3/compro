#include<stdio.h>
void main()
{
    int con,x,c=0,g=0,x1=0,y1=0,sum;
    while(1){
        scanf("%d",&con);
        if(con==0){
            break;
        }
        else if(con==1){
            scanf("%d",&x);
            c+=x;
            x1++;
        }
        else if(con==2){
            scanf("%d",&x);
            g+=x;
            y1++;
        }
    }
    sum=c-g;
    printf("%d %d\n%d %d %d",x1,y1,c,g,sum);
}
