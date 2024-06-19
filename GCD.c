#include<stdio.h>
void main()
{
    int a,b,i,n;
    printf("Enter 2 numbers  : ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(i=b;i>=1;i--)
        {
            if((a%i==0)  && (b%i==0))
            {
                
                break;
            }
        }
    }
    else
    {
        for(i=a;i>=1;i--)
        {
            if(b%i==0 && a%i==0)
                break;
        }
    }
    printf("GCD of %d and %d is: %d",a,b,i);
}