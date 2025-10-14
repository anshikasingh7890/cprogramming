#include<stdio.h>
int main(){

//Declaring variable
float kilometers;
float meters,feet,inches,centimeters;


//Taking input in distance in kilometers
printf("Enter the distances between two cities in kilometers:");
scanf("%f",&kilometers);

//Converts kilometers to feet
meters=kilometers*1000;

//converts meters to feet
feet=meters*3.28084;

//converts feet to inches
inches=feet*12;

//converts kilometers to centimeters
centimeters=kilometers*100000;

//Display the converted distances
printf("\nDistance in Meters=%f",meters);
printf("\nDistances in feet=%f",feet);
printf("\nDistances in inches=%f",inches);
printf("\nDistances in centimeters=%f",centimeters);

}
