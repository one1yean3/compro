#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[2][n];
    int count=0;
    for(int r=0;r<2;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&a[r][c]);
            if(r==1){
                for(int d=0;d<n;d++){
                    if(a[0][d]==a[r][c]){
                        count++;
                    }
                }
            }
        }
    }
    if(count!=0){
        printf("%d",count);
    }
    else{
        printf("NO");
    }
}
