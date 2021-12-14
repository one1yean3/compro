#include<stdio.h>
void main()
{
    int n;
    int max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    int array[n][max+1];
    for(int r=0;r<n;r++){
        for(int c=0;c<=max;c++){
            if(a[r]==c){
                array[r][c]=1;
            }
            else{
                array[r][c]=0;
            }
        }
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<=max;c++){
            printf("%d ",array[r][c]);
        }
        printf("\n");
    }
}
