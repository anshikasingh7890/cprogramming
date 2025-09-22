#include<stdio.h>
int main(){
    //Declaring a integer variable
    int a;
    int b;
    int c;
    int d;

    // Taking input in variable a
    printf("\nEnter First Value: ");
    scanf("%d",&a);

    printf("\nEnter Second Value: ");
    scanf("%d",&b);

    c=a+b;
    d=a*b;

    //printing value of a
    printf("\nSum =");
    printf("%d",c);

    printf("\nProduct=");
    printf("%d",d);

}
