#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    //input
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&a[r][c]);
        }
    }
    int d;
    scanf("%d",&d);
    //check d == 1
    if(d==1){
        for(int r=0;r<n;r++){
            if(r%2==1){
                for(int c=n-1;c>=0;c--){
                    printf("%d ",a[r][c]);
                }
            }
            else{
                for(int c=0;c<n;c++){
                    printf("%d ",a[r][c]);
                }
            }
            printf("\n");
        }
    }
    // d==2
    if(d==2){
        for(int r=n-1;r>=0;r--){
            if(r%2==0){
                for(int c=n-1;c>=0;c--){
                    printf("%d ",a[r][c]);
                }
            }
            else{
                for(int c=0;c<n;c++){
                    printf("%d ",a[r][c]);
                }
            }
            printf("\n");
        }
    }



}
