#include<stdio.h>
void main()
{
    int la,lb,lc,ld,sa,sb,sc,sd;
    scanf("%d %d %d %d",&la,&lb,&lc,&ld);
    scanf("%d %d %d %d",&sa,&sb,&sc,&sd);
    if(sa>=la){
        printf("1 ");
    }
    if(sb>=lb){
        printf("2 ");
    }
    if(sc>=lc){
        printf("3 ");
    }
    if(sd>=ld){
        printf("4");
    }
}
