#include<stdio.h>
void main()
{
    int x,y,z,lower,lowest,low;
    scanf("%d %d %d",&x,&y,&z);
    if(x<y){
        lowest=x;
        lower=y;
    }
    else{
        lowest=y; // 1
        lower=x;  // 2
    }
    if(lower>z){
        low=lower;
        if(lowest>z){
            lower=lowest;
            lowest=z;
        }
        else{
            lower=z;
        }
    }
    else{
        low=z;
    }
    printf("%d %d %d",lowest,lower,low);
}
