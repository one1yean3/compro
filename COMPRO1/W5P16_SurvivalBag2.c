#include<stdio.h>
main()
{
    int x,y,z,x1,y1,z1,low;
    scanf("%d %d %d",&x,&y,&z);
    x1=x/3;
    y1=y/4;
    z1=z/2;
    if(x1<y1){
        low=x1;
    }
    else{
        low=y1;
    }
    if(z1<low){
        low=z1;
    }
    else{
        low=low;
    }
    x=x-(low*3);
    y=y-(low*4);
    z=z-(low*2);
    printf("%d %d %d %d",low,x,y,z);
}
