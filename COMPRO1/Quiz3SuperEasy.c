#include<stdio.h>
void main()
{
    int N,x,y;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        if(y>x){
            for(int c=x;c<=y;c++){
                printf("%d ",c);
            }
            printf("\n");
        }
        else{
            for(int c=y;c<=x;c++){
                printf("%d ",c);
            }
            printf("\n");
        }
    }
}
