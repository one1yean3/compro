#include<stdio.h>
struct{
    char id[6];
    int sc;
}typedef examinee;
void main()
{
    int N;
    double sum=0;
    scanf("%d",&N);
    examinee people[N];
    for(int i=0;i<N;i++){
        scanf("%s %d",people[i].id,&people[i].sc);
        sum+=people[i].sc;
    }
    int c=0;
    for(int i=0;i<N;i++){
        if(people[i].sc>sum/N){
            c++;
        }
    }
    printf("%d\n",c);
    for(int i=0;i<N;i++){
        if(people[i].sc>sum/N){
            printf("%s\n",people[i].id);
        }
    }

}
