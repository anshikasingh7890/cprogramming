#include<stdio.h>

  int main(){
  int mathMarks,physicsMarks,chemistryMarks;

    printf("Enter marks in Mathematics:");
    scanf("%d",&mathMarks);

    printf("Enter mark in physics:");
    scanf("%d",&physicsMarks);

    printf("Enter mark in Chemistry:");
    scanf("%d",&chemistryMarks);

    int totalMarks=mathMarks+ physicsMarks=chemistryMarks;
    mathPhysicsTotal=mathMarks+physicsMarks;

    printf("Total Marks=%d\n",totalMark);
    printf("Total Marks(Math+physics)=%d\n",mathPhysicsTotal);

    if(mathMarks>=65&&
       physicsMarks>=55&&
       chemistryMarks>=50&&
      (totalMarks>=190||
       mathPhysicsTotal>=140)){
        printf("The candidate is eligible for addmission.");
       }else{
       printf("The candidate is not eligible for admission.");
       }

  }
