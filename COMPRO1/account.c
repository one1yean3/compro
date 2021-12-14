#include<stdio.h>
void main()
{
    int x,satit=0,narn=0,sn=0,nn=0;
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x>0){
            satit+=x;
            sn++;
        }
        if(x<0){
            narn+=x;
            nn++;
        }
    }
    printf("%d %d\n%d\n%d\n",sn,nn,satit,narn);
    if(satit+narn>=0){
    //if(satit>=narn){
        printf("debit");
    }
    else{
        printf("credit");
    }
}
