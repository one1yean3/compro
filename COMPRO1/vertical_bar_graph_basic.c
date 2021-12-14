#include<stdio.h>
void main()
{
    int n,max=0;
    scanf("%d",&n);
    int ar[n+1];
    //input num
    for(int i=1;i<=n;i++){
        scanf("%d",&ar[i]);
        //find max
        if(ar[i]>max){
            max=ar[i];
        }
    }
    //print
    for(int row=max;row>0;row--){
        for(int col=1 ; col<=n ; col++){
            if(row<=ar[col]){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
