//search an element from the array
#include<stdio.h>
void main(){
    int n[50],i,a,b,flag=0;
    printf("Enter the limit of array : \n");
    scanf("%d",&a);
    printf("Enter the numbers to array : \n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Enter a number want to search : \n");
    scanf("%d",&b);
    for(i=0;i<a;i++){
        if(n[i]==b){
        printf("Number found");
        flag=1;
        break;}
    }
    if(flag==0)
    printf("Number not found");
}