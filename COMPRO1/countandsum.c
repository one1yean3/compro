#include<stdio.h>
void main()
{
    int x,K=0,y,c=0,t=0;
    scanf("%d",&y);
    for(;;){
        scanf("%d",&x);

        if(x==0){
            break;
        }
        else{
            if(x>0){
                if(x%y==0){
                    c+=x;
                    t++;
                }
            }
            K++;
        }

    }
    printf("%d\n%d\n%d",K,t,c);
}
