
#include<stdio.h>
int main()
{
    //Declaring Variable
    int year;
    //Take input in year
    printf("Enter a year:");
    scanf("%d",&year);

    //Check leap year
    if(year%4==0){
        printf("%d is leap year\n",year);
    }else if(year%100==0){
    printf("%d is not leap year\n",year);
    }else if(year%400==0){
    printf("%d is leap year\n",year);
    }else{
    printf("%d is not leap year\n",year);
    }
}
