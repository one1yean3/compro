#include<stdio.h>
#include<limits.h>
void main()
{
    int N,maxn;
    float max=0;
    scanf("%d",&N);
    char name[N][31],surname[N][51];
    char id[N][9];
    float grade[N];
    for(int i=0;i<N;i++){
        scanf("%s",&id[i]);
        scanf("%s",&name[i]);
        scanf("%s",&surname[i]);
        scanf("%f",&grade[i]);
        if(grade[i]>max){
            max=grade[i];
            maxn=i;
        }
    }
    printf("%s %s %s %.2f",id[maxn],name[maxn],surname[maxn],grade[maxn]);
}
