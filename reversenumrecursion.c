#include<stdio.h>
int r=0;
int reverse(int num){
    int a;
    if(num>0){
        a=num%10;
    r=r*10+a;
    reverse(num/10);
    }
    else
    return r;
}
void main(){
    int a,b,x;
    printf("Enter a number : ");
    scanf("%d",&a);
    x=reverse(a);
     printf("Reverse of the number is : %d",x);
    
    }
