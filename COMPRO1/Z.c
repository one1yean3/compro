#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            a[r][c]=-1;
        }
    }
    int d=0;
    for(int c=0;c<n;c++){
        a[0][c]=d%10;
        d++;
    }
    int c=n-1;
    for(int r=1;r<n-1;r++){
        a[r][c-1]=d%10;
        c--;
        d++;
    }
    for(int c=0;c<n;c++){
        a[n-1][c]=d%10;
        d++;
    }

    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(a[r][c]!=-1){
                printf("%d ",a[r][c]);
            }
            else printf("  ");
        }
        printf("\n\n");
    }

}
