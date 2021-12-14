#include<stdio.h>
main()
{
    int i,x,odd,even;
    even=0;
    odd=0;
    for(i=1;i<=8;i++){
        scanf("%d",&x);
        if(x%2==0){
            even=x+even;
        }
        if(x%2==1||x%2==-1){
            odd=x+odd;
        }
    }
    if(odd>even){
        printf("odd\n%d\n%d",even,odd);
    }
    else if(odd<even){
        printf("even\n%d\n%d",even,odd);
    }
    else{
        printf("equal\n%d\n%d",even,odd);
    }
}
