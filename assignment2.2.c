#include<stdio.h>
#define Pi 3.14159
int main(){
float radius,volume;
printf("Enter the radius of the sphere:");
scanf("%f",&radius);

volume=(4*Pi*radius*radius*radius)/3;


printf("The volume of the spehere is %f",volume);



}
