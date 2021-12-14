#include<stdio.h>
void main()
{
    int x,y,i,a,b;
    for(i=0;i<7;i++){
        scanf("%d %d",&x,&y);
        a=x/250;
        b=y/15;
        if(a<=b){
            x=x-a*250;
            if(x>0){
            printf("%d water\n",a);
            }
            else{
                printf("%d\n",a);
            }
        }
        else{
            x=x-b*250;
            if(x>0){
                printf("%d water\n",b);
            }
            else{
                printf("%d\n",b);
            }
        }
    }
}
