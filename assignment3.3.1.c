#include<stdio.h>
int main(){
     //Declaring Variables
     char character;
     char a;
     char z;
     char A;
     char Z;

     //Taking Input
     printf("Enter a character:");
     scanf("%c", & character);

     //program Logic
     if (character>='a'&& character<='z'|| character>='A' && character<='z'){
        printf("Alphabet");
     }
     else if(character>='0' && character<='9'){
        printf("Digit");
     }else{
        printf("Special Character");
     }
}
