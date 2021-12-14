#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int a[2][x];
    for(int r=0;r<2;r++){
        for(int c=0;c<x;c++){
            scanf("%d",&a[r][c]);
        }
    }
    int c=0,d=0,count=0;
    for(;;){
            count++;
            if(c==x||d==x){
                break;
            }
            if(a[0][c]>a[1][d]){
                printf("1");
                a[0][c]-=a[1][d];
                d++;
            }
            else if(a[1][d]>a[0][c]){
                printf("2");
                a[1][d]-=a[0][c];
                c++;
            }
            else{
                printf("0");
                c++;
                d++;
            }
            printf("\n");
    }
}
