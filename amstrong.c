#include<stdio.h>
void main()
{
    int n,i,j,s=0,y;
    printf("Enter a number : ");
    scanf("%d",&n);
    y=n;
    for(i=0;i<n;i++)
    {
        j=y%10;
        s=s+(j*j*j);
        y=y/10;
    }
    if(s==n)
    printf("Number is armstrong");
    else
    printf("Number is not armstrong");
}