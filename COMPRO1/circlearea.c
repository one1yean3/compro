#include <stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    if(r>0)
    {
        printf("%.5f",3.1415926*r*r);

    }
    else
    {
        printf("invalid input");
    }
}
