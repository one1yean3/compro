#include<stdio.h>
void main()
{
    float x,y,z,c;
    scanf("%f %f %f",&x,&y,&z);
    if(z==0){
        printf("cannot divide by zero");
    }
    else{
        c=(x+y)/z;
        printf("%f",c);
    }

}
