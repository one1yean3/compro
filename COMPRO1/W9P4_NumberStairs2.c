#include<stdio.h>
void main()
{
    int inp[501],x,num=0;
    for(int i=1;i<=501;i++){
        scanf("%d",&x);
        if(x<0||x>9){
            break;
        }
        else{
            inp[i]=x;
            num++;
        }
    }
    int g=0,d=num;
    for(int i=1;i<=num;i++){
        for(int c=1;c<d;c++){
            printf(" ");
        }
        for(int c=0;c<=g;c++){
            printf("%d",inp[i]);
        }
        g++;
        d--;
        printf("\n");
    }
}
