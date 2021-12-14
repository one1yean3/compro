#include<stdio.h>
void main()
{
    int n,x,eco=0,luxury=0,normal=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x>=15){
            eco++;
        }
        else if(x<10){
            luxury++;
        }
        else{
            normal++;
        }
    }
    printf("%d %d %d",eco,normal,luxury);
}
