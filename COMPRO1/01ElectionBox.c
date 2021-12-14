#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int ar[x][x];
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            ar[r][c]=0;
        }
    }
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            ar[0][c]=1;
            ar[x-1][c]=1;
            ar[r][0]=1;
            ar[r][x-1]=1;
        }
    }
    // XXXX
    int d=x-1;
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            if(r==c){
                ar[r][c]++;
            }
            if(c-d==r){
                ar[r][c]++;
                d-=2;
            }
        }
    }


    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            if(ar[r][c]>0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
