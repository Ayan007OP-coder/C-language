#include<stdio.h>
int main()
{ int a,b;
printf("enter the two integers :");
scanf("%d %d",&a,&b);
int x;
printf("enter 1,2,3,4 for multiplication,division,addition,substraction respectively : ");
scanf("%d",&x);
switch(x)
{
case 1 : printf("%d\n",a*b);
break;
case 2 : printf("%d\n",a/b);
break;
case 3 : printf("%d\n",a+b);
break;
case 4 : printf("%d\n",a-b);
break;
default : printf("not valid\n");}
    return 0;
}
