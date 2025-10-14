#include<stdio.h>
int main(){
float totalSellingPrice;
float totalProfit;
float totalCostPrice;
float costPricePerltem;
int numberOfltems=15;

//Taking input in the total profit
printf("Enter the total profit earned on 15 items=");
scanf("%f",&totalSellingPrice);

//Taking input in the total profit
printf("Enter the total profit earned on 15items=");
scanf("%f",&totalProfit);


//Calculate the total cost price
totalCostPrice=totalSellingPrice-totalProfit;


//Calculate the cost price of one item
costPricePerltem=totalCostPrice/numberOfltems;

//Print the result
printf("The cost price of one item is=%f",costPricePerltem);


}
