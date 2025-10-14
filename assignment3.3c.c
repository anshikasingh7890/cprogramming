#include<stdio.h>
int main(){
int x,y;
printf("Enter the x-coordinate:");
scanf("%d",&x);

printf("Enter the value of y-coordinate:");
scanf("%d",&y);

if(x==0&&y==0){
    printf("the point is at the origin");

}else if (x>0&&y>0){
printf("the point lies in Quardant|");

}else if (x<0&&y>0){
printf("The point lies in Quardant||");

}else if(x<0&&y<0){
printf ("The point lies in Quardant|||");

}else if (x>0&&y>0){
printf ("The point lies in Quadrant |V");

}

}

