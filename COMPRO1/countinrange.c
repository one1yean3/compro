#include<stdio.h>
void main()
{
    int x,y,a,less=0,more=0,between=0;
    scanf("%d %d",&x,&y);
    while(1){
        scanf("%d",&a);
        if(a==0){
            break;
        }
        if(a<x&&a<y){
            less++;
            //printf("less = %d",less);
        }
        else if(a>x&&a>y){
            more++;
            //printf("more = %d",more);
        }
        else if(a>x&&a<y){
            between++;
            //printf("between = %d",between);
        }
        else if(a<x&&a>y){
            between++;
            //printf("between = %d",between);
        }
    }
    printf("%d\n%d\n%d",between,less,more);
}
