#include<stdio.h>
void main()
{
    int i,j=0,n,x=0,temp;
    printf("Enter the limit : ");
    scanf("%d",&n);
    //0,1,1,2,3,5,8,13,21,34
    printf("Fibonacci series : ");
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
             j=i;temp=i;
        }
        else
        {  
             temp=j;
             j=j+x;
             x=temp;
        }
        if(j<n)
         printf("  %d ",j);
    }
}