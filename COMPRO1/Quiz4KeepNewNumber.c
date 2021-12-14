#include<stdio.h>
int array[1000000];
int out[1000000];
void main()
{
    int x,n=0,c=0,d=0;
    for(;;){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        array[n]=x;
        for(int i=0;i<=n;i++){
            if(x==array[i]){
                c++;
            }
            if(c>1){
                break;
            }
        }
        if(c==1){
            out[d]=x;
            d++;
        }
        n++;
        c=0;
    }
    printf("%d\n%d\n",n,d);
    for(int i=0;i<d;i++){
        printf("%d ",out[i]);
    }
}
