#include <stdio.h>
int main (){
  //Declaring variable
  float basic_salary;
  float dearness_allowance;
  float house_rent_allowance;
  float gross_salary;


  //taking Input in basic salary
  printf ("Enter Ramesh's basic salary: ");
  scanf("%f",&basic_salary);

  //caculate house rent allowance
  dearness_allowance=40/100*basic_salary;

  //calculate gross salary
  gross_salary=basic_salary+dearness_allowance+house_rent_allowance;

  //print the gross_salary
  printf("Ramesh's Gross salary: %f/n  ,Gross_salary");


}



