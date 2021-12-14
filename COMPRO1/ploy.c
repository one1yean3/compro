#include<stdio.h>
int a[1000000];
void main()
{
    int x;
    int count=0;
    int asize=0;
    int check;
    for(;;){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        count++;
        if(count == 1){
            a[0]=x;
            asize++;
        }
        //check ว่าซ้ำไหม
        for(int i=0;i<asize;i++){
            if(x == a[i]){
                check=1;
                break;
            }
        }
        //check = 1 ไม่เข้าอาเรย์
        //check = 0 ไม่ซ้ำจะให้เข้าอาเรย์
        if(check==0){
            a[asize]=x;
            asize++;
        }
        check=0;
    }
    printf("%d\n",count);
    printf("%d\n",asize);
    for(int i=0;i<asize;i++){
        printf("%d ",a[i]);
    }
}
