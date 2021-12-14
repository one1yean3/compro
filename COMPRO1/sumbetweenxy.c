#include<stdio.h>
void main()
{
    int x,y,a,satit=0;
    scanf("%d %d",&x,&y);
    while(1){
        scanf("%d",&a);
        if(a<=0){
            break;
        }
        if(a>=x&&a<=y){
            satit+=a;
        }
        if(a>=y&&a<=x){
            satit+=a;
        }
    }
    printf("%d",satit);
}
