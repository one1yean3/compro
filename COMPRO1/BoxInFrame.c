#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        printf("*");
    }

    printf("\n");
    for(int c=0;c<x-2;c++){
        for(int i=0;i<x;i++){
            if(i==0||i==x-1||(i!=1&&i!=x-2&&c!=0&&c!=x-3)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=x;i++){
        printf("*");
    }
}
