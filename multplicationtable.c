#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        j=i*n;
        printf("\n%d*%d=%d",i,n,j);
    }

}