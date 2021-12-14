#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int tag=x/2,i=1;
    for(int top=0;top<(x/2)+1;top++){
        for(int space=0;space<tag;space++){

            printf(" ");

        }
        for(int star=0;star<i;star++){
            if(star==0||star==i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        tag--;
        i+=2;
    }
    int g=x-2,c=1;
    for(int down=0;down<x/2;down++){
        for(int space=0;space<c;space++){
            printf(" ");
        }
        for(int star=0;star<g;star++){
            if(star==0||star==g-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        c++;
        g-=2;
    }
}
