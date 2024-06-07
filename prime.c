#include<stdio.h>
void main(){
    int a,flag=1,i;
    printf("Enter a number");
    scanf("%d",&a);
    if(a==0)
    printf("Number is zero");
    else if(a==1){
        printf("Number is not prime");
    }
    else{

    for(i=2;i<a;i++){
        if(a%i==0)
        {
           
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("Number is not prime");
    }
    else{
        printf("Number is prime");
    }

    }

}