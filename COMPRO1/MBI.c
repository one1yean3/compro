#include<stdio.h>
void main()
{
    float N,i=0,w,t,BMI,uw=0,nw=0,ow=0,obe=0,perc; //w=weight , t=tall , uw=underw
    float u=0,n=0,o=0,ob=0;                     //nw=normalw , ow=overw
    scanf("%f",&N);
    while(i<N){
        scanf("%f %f",&w,&t);
        t=(t/100);
        t=t*t;
        BMI=w/t;
        if(BMI<18.5){
            uw+=w;
            u++;
        }
        else if(BMI<=24.9){
            nw+=w;
            n++;
        }
        else if(BMI<=29.9){
            ow+=w;
            o++;
        }
        else{
            obe+=w;
            ob++;
        }

        i++;
    }

    uw=uw/u;
    nw=nw/n;
    ow=ow/o;
    obe=obe/ob;
    perc=100/N;
    if(u>0){
        printf("Underweight %.0f %.2f %.2f%%\n",u,uw,perc*u);
    }
    else{
        //printf("Underweight 0 0 0\n");
    }
    if(n>0){
        printf("Normal weight %.0f %.2f %.2f%%\n",n,nw,perc*n);
    }
    else{
        //printf("Normal weight 0 0 0\n");
    }
    if(o>0){
        printf("Overweight %.0f %.2f %.2f%%\n",o,ow,perc*o);
    }
    else{
        //printf("Overweight 0 0 0\n");
    }
    if(ob>0){
        printf("Obesity %.0f %.2f %.2f%%",ob,obe,perc*ob);
    }
    else{
        //printf("Obesity 0 0 0");
    }



    /*printf("Underweight %.0f %.2f %.2f%%\n",u,uw,perc*u);
    printf("Normal weight %.0f %.2f %.2f%%\n",n,nw,perc*n);
    printf("Overweight %.0f %.2f %.2f%%\n",o,ow,perc*o);
    printf("Obesity %.0f %.2f %.2f%%",ob,obe,perc*ob);*/
}
