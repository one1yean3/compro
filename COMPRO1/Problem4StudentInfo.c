#include<stdio.h>
    struct {
        int id;
        char name[52];
        int score[5];
    } typedef STUDENT;
    char names[52];
    STUDENT students[100];
void showAllScores(int count){
    printf("Scores\n");
    for(int i=0;i<count;i++){
        printf("%d %s ",students[i].id,students[i].name);
        for(int c=0;c<5;c++){
            printf("%d ",students[i].score[c]);
        }
        printf("\n");
    }
}
void showAllGrades(int count){
    printf("Grades\n");
    for(int i=0;i<count;i++){
        printf("%d %s ",students[i].id,students[i].name);
        for(int c=0;c<5;c++){
            if(students[i].score[c]>=80){
                printf("A ");
            }
            else if(students[i].score[c]>=70){
                printf("B ");
            }
            else if(students[i].score[c]>=60){
                printf("C ");
            }
            else if(students[i].score[c]>=50){
                printf("D ");
            }
            else{
                printf("F ");
            }
        }
        printf("\n");
    }
}
void showStudentScores(int count,int ids){
    for(int i=0;i<count;i++){
        if(ids == students[i].id){
            printf("%d %s ",students[i].id,students[i].name);
            for(int c=0;c<5;c++){
                printf("%d ",students[i].score[c]);
            }
            printf("\n");
        }
    }

}
void showStudentGrade(int count,int ids){
    for(int i=0;i<count;i++){
        if(ids == students[i].id){
            printf("%d %s ",students[i].id,students[i].name);
            for(int c=0;c<5;c++){
                if(students[i].score[c]>=80){
                    printf("A ");
                }
                else if(students[i].score[c]>=70){
                    printf("B ");
                }
                else if(students[i].score[c]>=60){
                    printf("C ");
                }
                else if(students[i].score[c]>=50){
                    printf("D ");
                }
                else{
                    printf("F ");
                }
            }
            printf("\n");
        }
    }

}
void changeName(int count,int ids){

    for(int i=0;i<count;i++){
        if(ids == students[i].id){
            scanf("%s",students[i].name);
        }
    }

}
void changeScore(int count,int ids,int quiz,int change){
    quiz-=1;
    for(int i=0;i<count;i++){
        if(ids == students[i].id){
            students[i].score[quiz]=change;
        }
    }
}
void main()
{
    int command;
    int count=0;
    while(1){
        scanf("%d",&students[count].id);
        if(students[count].id==0){
            break;
        }
        scanf("%s",students[count].name);
        for(int i=0;i<5;i++){
            scanf("%d",&students[count].score[i]);
        }
        count++;
    }
    printf("Number of Students %d\n",count);
    showAllScores(count);
    showAllGrades(count);
    int ids;
    int quiz;
    int change;
    while(1){
        scanf("%d",&command);
        if(command == 0){
            break;
        }
        else if(command == 1){
            showAllScores(count);
        }
        else if(command == 2){
            showAllGrades(count);
        }
        else if(command == 3){
            scanf("%d",&ids);
            showStudentScores(count,ids);
        }
        else if(command == 4){
            scanf("%d",&ids);
            showStudentGrade(count,ids);
        }
        else if(command == 5){
            scanf("%d",&ids);
            changeName(count,ids);
        }
        else if(command == 6){
            scanf("%d",&ids);
            scanf("%d",&quiz);
            scanf("%d",&change);
            changeScore(count,ids,quiz,change);
        }
        else{
            printf("please input 1,2,3,4,5,6,or 0\n");
        }
    }
}
