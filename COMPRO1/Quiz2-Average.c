#include<stdio.h>
void main()
{
    float N,i=0,x,satit=0,narn=0;
    scanf("%f",&N);
    while(i<N){
        scanf("%f",&x);
        if(x<=0){
            narn++;
            break;
        }
        else{
            satit+=x;
        }
        i++;
    }
    satit=satit/i;
    if(narn==1){
        printf("Not positive\n");
    }
    printf("%.4f",satit);
}
