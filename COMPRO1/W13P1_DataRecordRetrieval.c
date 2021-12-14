#include<stdio.h>
struct {
    char id[9];
    char name[31];
    char surname[51];
    int year;
}typedef data;
void main()
{
    int N;
    scanf("%d",&N);
    data student[N];
    for(int i=0;i<N;i++){
        scanf("%s",student[i].id);
        scanf("%s",student[i].name);
        scanf("%s",student[i].surname);
        scanf("%d",&student[i].year);
    }
    int x;
    int c=0;
    scanf("%d",&x);
    for(int i=0;i<N;i++){
        if(x==student[i].year){
            printf("%s ",student[i].id);
            printf("%s ",student[i].name);
            printf("%s\n",student[i].surname);
            c++;
        }
    }
    if(c==0){
        printf("None");
    }
}
