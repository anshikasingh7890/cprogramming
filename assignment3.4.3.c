#include<stdio.h>
int main(){
int a;
printf("Enter the day number:");
scanf("%d",&a);
if(a==1){
    printf("JANUARY has 31 days");
}
else if (a==2){
    printf("FEBRUARY has 28-29 days");
}
else if (a==3){
    printf("MARCH has 31 days");
}
else if (a==4){
    printf("APRIL has 30 days");
}
else if (a==5){
    printf("MAY has 31 days");
}
else if (a==6){
    printf("JUNE has 30 days");
}
else if (a==7){
    printf("JULY has 31 days");
}
else if (a==8){
    printf("AUGUST has 31 days");
}
else if (a==9){
    printf("SEPTEMBER has 30 days");
}
else if (a==10){
    printf("OCTOBER has 31 days");
}
else if (a==11){
    printf("NOVEMBER has 30 days");
}
else if (a==12){
    printf("DECEMBER has 31 days");
}
else{
    printf("invalid digit");
}
}
