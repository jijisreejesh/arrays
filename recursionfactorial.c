#include<stdio.h>
int fact(int a)
{
    if(a==0)
        return 1;
     else
     {
        return(a*fact(a-1));
     }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d! : %d",n,fact(n));
    return 0;
}

    