#include<stdio.h>
void main()
{
    int x,mid;
    scanf("%d",&x);
    int a[x][x];
    //clean
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            a[r][c]=0;
        }
    }
    //outline
    for(int r=0;r<x;r++){
        a[r][0]++;
        a[r][x-1]++;
    }
    for(int c=1;c<x;c++){
        a[0][c]++;
        a[x-1][c]++;
    }
    //cross
    mid=(x/2)+1;
    for(int r=mid-3;r<=mid+1;r++){
        for(int c=0;c<x;c++){
            a[r][c]++;
            a[c][r]++;
        }
    }
    //diagonal top left to bot right
    int start=0,end=2;
    for(int r=1;r<x;r++){
        for(int c=start;c<=end;c++){
            a[r][c]++;
        }
        start++;
        end++;
    }
    //diagonal top right to bot left
    int start2=x-3,end2=x-1;
    for (int r=1;r<x;r++){
        for(int c=start2;c<=end2;c++){
            a[r][c]++;
        }
        start2--;
        end2--;
    }
    //test
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            if(a[r][c]>0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

