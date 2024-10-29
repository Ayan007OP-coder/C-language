#include<stdio.h>
int main()
{ float a,b,c;
printf("enter three numbers :");
scanf("%f %f %f",&a,&b,&c);
if(a>b && b>c){printf("the largest number is %f and smallest is %f ",a,c);}
else if(a>c && c>b){printf("the largest number is %f and the smallest number is %f",a,b);}
else if(b>a &&a>c){printf("the largest number is %f and the smallest number is %f",b,c);}
else if(b>c && c>a){printf("the largest number is %f and the smallest number is %f",b,a);}
else if(c>a && a>b){printf("the largest number is %f and the smallest number is %f",c,b);}
else if(c>b && b>a){printf("the largest number is %f and the smallest number is %f",c,a);}
else{printf("invalid input for the program");}
    return 0;
}