#include<stdio.h>
int main(){
  //Declaring Value
  char character;

  //taking value
  printf("Enter a character\t");
  scanf("%c",&character);

  if(character=='a'||character=='e'||character=='i'||character=='0'){
    printf("Vowel");
  }
  return 0;
}
