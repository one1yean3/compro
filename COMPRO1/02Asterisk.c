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
            if(r==x/2){
                ar[r][c]++;
            }
            if(c==x/2){
                ar[r][c]++;
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
