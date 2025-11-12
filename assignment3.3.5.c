#include<stdio.h>
int main(){
   //Declaring Value
   char grade;

   //Taking Input
  printf("Enter a grade(E,V,g,A,F)\n");
  scanf("%c",&grade);

  if(grade=='E'||grade=='e'){
    printf("exellent");

  }else if(grade=='V'||grade=='v'){
  printf("very good");

  }else if(grade=='G'||grade=='g'){
  printf("good");

  }else if(grade=='A'||grade=='a'){
  printf("average");

  }else{
      printf("fail");
  }


}
