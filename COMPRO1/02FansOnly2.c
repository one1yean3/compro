#include<limits.h>
void main()
{
    int x,y,min=INT_MIN,c=0;
    float pn=0,n=0;
    while(1){
        scanf("%d",&x);
        if(x==-1){
            break;
        }
        if(x==4){
            pn++;
            c++;
        }
        else{
            c=0;
        }
        if(c>min){
            min=c;
        }
        n++;
    }
    n=(pn/n*100);
    if(n>=60&&min>=3){
        printf("The user was banned");
    }
    else if(n>=60||min>=3){
        printf("The user was warned");
    }
    else{
        printf("Pass");
    }
}
