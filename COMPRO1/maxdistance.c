#include<stdio.h>
main()
{
    int x,y,min,max,f,g=0,t=0,i=0;
    scanf("%d %d",&min,&max);
    while(1){
        scanf("%d %d",&x,&y);
        if(x==0&&y==0){
            break;
        }
        if(y-x>t){
            t=y-x;
        }
    }
    printf("%d",t);
}
