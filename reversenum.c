#include<stdio.h>
void main(){
    int a,b,x,s=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    b=a;
     printf("Reverse of the number is : ",x);
    while(b>0){
        x=b%10;
        s=s+1;
        b=b/10;
        printf("%d",x);
    }
    printf("\nnumber of digits in number : %d",s);
    
    
}