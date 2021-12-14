#include<stdio.h>
#include<limits.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&a[r][c]);
        }
    }
    int l,k,r,p;
    int fcount=0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            l=row;
            k=row+1;
            r=col;
            p=col+1;
            if(row!=0&&col!=0&&row!=n-1&&col!=n-1){
            int count=0;
            int min=INT_MAX;
            int max=INT_MIN;
            int sum=0;

            for(int i=row;i<=row+1;i++){
                for(int j=col;j<=col+1;j++){
                    sum+=a[i][j];
                    if(a[i][j]>=max){
                        max=a[i][j];
                    }
                }
            }
           // printf("max = %d\n",max);

            for(int d=row-1;d<=row+2;d++){
                for(int b=col-1;b<=col+2;b++){
                    if(d!=l&&b!=r){
                        if(a[d][b]<=max){
                            count=1;
                        }
                    }

                    int dsum= a[d][b]+a[d+1][b]+a[d][b+1]+a[d+1][b+1];
                    if(dsum<sum){
                        count=1;
                    }
                }
            }

            if(count == 0 ){
                fcount++;
                printf("%d %d\n%d %d\n",a[row][col],a[row][col+1],a[row+1][col],a[row+1][col+1]);

            }
        count = 0;

        }
        }
    }
    printf("%d",fcount);

}
