#include<stdio.h>
#include<limits.h>
void main()
{
    int x,y=0,c=1,maxcount=INT_MIN,maxtarget,j=0,c1;
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x==y){
            c++;
        }
        else if(x!=y){
            if(c>maxcount){
                maxcount=c;
                maxtarget=y;
            }
            c=1;
            y=x;
        }
        if(j==0){
            c1=x;
            j++;
        }
    }
    if(maxcount==1){
        printf("1\n%d",c1);
    }
    else{
        printf("%d\n%d",maxcount,maxtarget);
    }
}
