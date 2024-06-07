#include<stdio.h>
void main(){
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a==0){
        printf("Number is zero");
    }
   else if(a%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    
}