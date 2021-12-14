#include<stdio.h>
void main()
{
    int x,y,z=0,i=0,g;
    scanf("%d",&x);
    while(1){
        g=0;
        scanf("%d",&y);
        while(y==x){
                i++;
                g++;
                scanf("%d",&y);
                if(y!=x){
                    if(z<=g){
                    z=g;
                    }
                    break;
                }
            }
        if(y==0){
            break;
        }
    }
    printf("%d\n%d",z,i);
}
