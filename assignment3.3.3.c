#include<stdio.h>
int main(){
  //declaring value
  int cost_price;
  int selling_price;

  //Input value
  printf("Enter cost price\t");
  scanf("%d",&cost_price);

  printf("Enter selling price\t");
  scanf("%d",&selling_price);

  if(selling_price==cost_price){
    printf("no profit no loss");
  }else if (selling_price<=cost_price){
     printf("loss amount");
  }else{
  printf("profit amount");
  }
 return 0;
}
