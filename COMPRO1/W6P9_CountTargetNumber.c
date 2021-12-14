#include<stdio.h>
void main()
{
    int x,y,i;
    i=0;
    scanf("%d",&x);
    while(1){
        scanf("%d",&y);
        if(y==0){
            break;
        }
        else if(y==x){
            i++;
        }
    }
    if(i==0){
        printf("None");
    }
    else{
        printf("%d",i);
}
}
