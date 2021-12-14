#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d",&x);
    if(x<1||x>99){
        printf("Number is out of range");
    }
    else {
        for(y=1;y<=12;y++){
            if(x*12<100){
                printf("%d x %2d = %2d\n",x,y,x*y);
            }
            else if(x*12<1000){
                printf("%d x %2d = %3d\n",x,y,x*y);
            }
            else if(x*12<10000){
                printf("%d x %2d = %4d\n",x,y,x*y);
            }
        }
    }
}
