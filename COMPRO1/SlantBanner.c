#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    for(int g=1;g<=x;g++){
        for(int i=1;i<=x;i++){
            if(i%3 == g%3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
}
