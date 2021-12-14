#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&y);
        if(y%2==0){
            for(int c=0;c<y;c++){
                printf("#");
            }
        }
        else{
            for(int c=0;c<y;c++){
                printf("*");
            }
        }
        printf("\n");
    }
}
