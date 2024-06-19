#include<stdio.h>
void fun(int);
void main()
{
 int x=10;//local variable
 static int y=10;//static variable
 x=x+1;
 y=y+1;
 fun(y);
 printf("\n%d,%d\n",x,y);
}
void fun(int a)
{
    printf("static variable :%d",a);
}