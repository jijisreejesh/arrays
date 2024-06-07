#include<stdio.h>
void main(){
    int a,i,s=0;
    printf("Enter a number : \n");
    scanf("%d",&a);
    while(a>0){
        i=a%10;
        s=s+i;
        a=a/10;
    }
    printf("sum of digits : %d",s);
}