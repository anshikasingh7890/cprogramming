#include<stdio.h>
 int main(){
  float temperature;

  printf("Enter the temperature in centigrade:");
  scanf("%f",&temperature);

  if(temperature<0){
    printf("freezing weather\n");
}else if (temperature>=0 && temperature<=10){
    printf("Very Cold weather\n");
}else if (temperature>20 && temperature<=30){
    printf("Normal in temperature\n");
}else if (temperature>30 && temperature<=40){
    printf("it's Hot\n");
}
return 0;


 }
