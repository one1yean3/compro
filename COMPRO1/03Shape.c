#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    for(int r=0;r<x;r++){
        if(r==x/3||r==(2*x)/3){
            for(int c=0;c<x;c++){
                printf("#");
            }
        }
        else{
            for(int c=0;c<x;c++){
                if(c==x/3||c==(2*x)/3){
                    printf("#");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
