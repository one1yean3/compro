#include<stdio.h>
void main()
{
    int x,y,a,satit=0,nx=0,ny=0;
    scanf("%d %d",&x,&y);
    while(1){
        scanf("%d",&a);
        if(a<=0){
            break;
        }
        if(a%x==0||a%y==0){
            satit+=a;
            if(a%x==0&&a%y!=0){
                nx+=a;
            }
            if(a%y==0&&a%x!=0){
                ny+=a;
            }
        }
    }
    printf("%d\n%d\n%d",nx,ny,satit);
}
