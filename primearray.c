//prime numbers in a array
#include<stdio.h>
void main(){
    int a[25],n,i,flag,j,x;
    printf("Enter the limit : ");
    scanf("%d",&n);
     printf("Enter the numbers in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
     printf("prime numbers in array : \n");
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if((a[i]%j)==0)
            {
                flag=1;
                break;
            }
        }
        if((flag==0)&&(a[i]!=1))
        {
            printf("%d ",a[i]);
            x=0;
        }
    }
    if(x!=0){
        printf("No Prime numbers");
    }

}