#include<stdio.h>
void main()
{
    int la,lb,lc,ld,sa,sb,sc,sd,c=0;
    scanf("%d %d %d %d",&la,&lb,&lc,&ld);
    scanf("%d %d %d %d",&sa,&sb,&sc,&sd);
    if(sa>=la){
        printf("1 \0");
        c++;
    }
    if(sb>=lb){
        printf("2 ");
        c++;
    }
    if(sc>=lc){
        printf("3 ");
        c++;
    }
    if(sd>=ld){
        printf("4");
        c++;
    }
    if(c==0){
        printf("0");
    }
    printf("\n");
    if(c>2){
        printf("pass");
    }
    else{
        printf("fail");
    }
}

