#include<stdio.h>
void main()
{
    int p1,p2,needp1,needp2;
    float T,W,O;
    scanf("%d %d %d %f %d",&p1,&p2,&W,&T,&O);
    if(T>=37.5&&O<90){
        needp1=3*W;
    }
    else if(T>=37.5&&O>=90){
        needp1=2*W;
    }
    else if(T<37.5&&O<90){
        needp1=2*W;
    }
    else{
        needp1=0;
    }
    needp2=120+(4*needp1);
    printf("%d %d\n%d %d",needp1,needp2,p1-needp1,p2-needp2);

}
