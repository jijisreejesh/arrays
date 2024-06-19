#include<stdio.h>
void main()
{
    int i=1,j=1,n;
    //5!=1*2*3*4*5=120
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j*i;

    }
    printf("factorial of %d is : %d",n,j);

}
