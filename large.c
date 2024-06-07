#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("Largest number is : %d \n",a);
    }
    else if(b>a && b>c){
        printf("Largest number is : %d \n",b);
    }
    else{
        printf("Largest number is : %d \n",c);
    }

}