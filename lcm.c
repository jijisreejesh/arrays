#include<stdio.h>
void main()
{
    int a,b,i,n,s=1,m;
    printf("Enter 2 numbers  : ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(i=1;i<=a;i++)
        {
            if((a%i==0)  && (b%i==0))
            {
                s=s*i;
                m=a/i;n=b/i;
            }
        }
    }
    else
    {
        for(i=1;i<=b;i++)
        {
            if(b%i==0 && a%i==0)
                s=s*i;
        }
    }
    s=s*m*n;
    printf("LCM of %d and %d is: %d",a,b,s);
}