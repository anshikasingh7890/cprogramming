#include <stdio.h>
int main(){
  //Declaring variable
   int total_minutes;
   int hours;
   int minutes;

   //taking inputs in ours and minutes
   printf("Enter the value of minutes: ");
   scanf("%d",&total_minutes);


   //Applying Formula
   hours=total_minutes/60;
   minutes=total_minutes%60;


   //program logic
   printf("%d",hours);
   printf("%d",minutes);

}
