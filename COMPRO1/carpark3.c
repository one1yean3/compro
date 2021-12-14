#include<stdio.h>
void main()
{
    int x,h1,m1,h2,m2,nine=0,twelve=0,fift=0,eight=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1<=9||h2>=9){
            nine++;
        }
        if(h1<=12||h2>=12){
            twelve++;
        }
        if(h1<=15||h2>=15){
            fift++;
        }
        if(h1<=18||h2>=18){
            eight++;
        }
    }
    printf("9:00 %d\n",nine);
    printf("12:00 %d\n",twelve);
    printf("15:00 %d\n",fift);
    printf("18:00 %d\n",eight);
}
