#include<stdio.h>
#include<limits.h>
void main()
{
    int MAX=INT_MIN;
    int MIN=INT_MAX;
    int INPUT;
    for(int i=0;i<8;i++){
        scanf("%d",&INPUT);
        if(INPUT>0){
            if(INPUT>MAX){
                MAX=INPUT;
            }
            if(INPUT<MIN){
                MIN=INPUT;
            }
        }
    }
    printf("%d\n%d",MAX,MIN);
}
