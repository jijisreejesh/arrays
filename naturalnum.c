#include<stdio.h>
void main()
{
    int s=0,n,i;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;

    }
    printf("Sum of first %d natural numbers : %d",n,s);
}