#include<stdio.h>
#include<limits.h>
void main()
{
    int x;
    scanf("%d",&x);
    int a[x][x];
    int ar[x][2];
    int max=INT_MIN,sum=0;
    for(int r=0;r<x;r++){

        for(int c=0;c<x;c++){
            scanf("%d",&a[r][c]);
            sum+=a[r][c];
        }
        if(sum > max){
            max=sum;
        }

        sum=0;
    }

    for(int c=0;c<x;c++){
        sum=0;
        for(int r=0;r<x;r++){
            sum+=a[r][c];
        }
        if(sum>max){
            max=sum;
        }
    }
    sum=0;
    int n=0;
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            sum+=a[r][c];
        }
        if(sum==max){
            ar[n][0]=r+1;
            n++;
        }
        sum=0;
    }
    sum=0;
    int d=0;
    for(int c=0;c<x;c++){
        for(int r=0;r<x;r++){
            sum+=a[r][c];
        }
        if(sum==max){
            ar[d][1]=c+1;
            d++;
        }
        sum=0;
    }

    printf("max %d\n",max);
    if(n!=0){
        printf("row ");
        for(int i=0;i<n;i++){
            printf("%d ",ar[i][0]);
        }
        printf("\n");
    }
    if(d!=0){
        printf("col ");
        for(int i=0;i<d;i++){
            printf("%d ",ar[i][1]);
        }
        printf("\n");
    }


}
