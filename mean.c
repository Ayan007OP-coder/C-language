#include<stdio.h>
int main(){
float a,b,c;
printf("Enter the three numbers :");
scanf("%f %f %f",&a,&b,&c);
float x=a+b+c;
printf("The average between the given three numbers is %f",x/3);
return 0;
}