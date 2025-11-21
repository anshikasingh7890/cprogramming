#include<stdio.h>
int main(){
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
printf("For circle enter:1\n");
printf("For rectangle enter:2\n");
printf("For triangle enter:3\n");
printf("Enter the shape number:");
scanf("%d",&a);
if (a==1){
    printf("Enter the radius:");
    scanf("%d",&e);
    f=2*22/7*e;
printf("The area of a circle is :%d",f);
}
else if(a==2){
    printf("Enter the length:");
    scanf("%d",&b);
    printf("Enter the breath:");
    scanf("%d",&c);
    d=b*c;
printf("The area of rectangle is;%d",d);
}
else if(a==3){
    printf("Enter the height:");
    scanf("%d",&h);
    i=g*h*1/2;
printf("The area of rectangle id :%d",d);
}

}
