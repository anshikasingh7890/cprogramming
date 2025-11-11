#include<stdio.h>
int main(){
    int roll;
    char name[50];
    int m1,m2,m3,total;
    float percentage;

    printf("Enter Roll Number:");
    scanf("%d",&roll);

    printf("Enter Name:");
    scanf("%d %d %d",&m1,&m2,&m3);

    total=m1+m2+m3;
    percentage=(total/380.0)*100;

    printf("\nRoll No: %d\n",roll);
    printf("Name:%s\n",name);
    printf("Total Marks:%d\n",total);
    printf("percentage:%2f%%\n",percentage);

    if(percentage>=60)
        printf("Division:First\n");
    else if (percentage>=50)
        printf("Division:Second\n");
    else if (percentage>=40)
        printf("Division:Third\n");
    else
        printf("Division:Fail\n");
    return 0;

}
