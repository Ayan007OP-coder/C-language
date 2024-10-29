#include<stdio.h>
int main()
{ float a,b;
printf("enter the two numbers :");
scanf("%f %f",&a,&b);
int x;
printf("enter 1,2,3,4 for multiplication,division,addition,substraction respectively : ");
scanf("%d",&x);
switch(x)
{
case 1 : printf("%f\n",a*b);
break;
case 2 : printf("%f\n",a/b);
break;
case 3 : printf("%f\n",a+b);
break;
case 4 : printf("%f\n",a-b);
break;
default : printf("not valid\n");}
    return 0;
}
