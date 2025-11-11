#include<stdio.h>
int main (){
  int customerID;
  char name[50];
  float units,ChargePerUnit,amount,surcharge=0, totalAmount;

  printf("Enter Customers ID: ");
  scanf("%d", &customerID);

  printf("Enter Customer Name:");
  scanf("%s",name);

  printf("Enter Units Consumed:");
  scanf("%f",&units);


  if(units<=199)
    chargePerUnit=1.20;
  else if (units>=200 && units<400)
    chargePerUnit =1.50;
}
