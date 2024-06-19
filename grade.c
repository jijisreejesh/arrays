//grade of a student
#include<stdio.h>
void main(){
    int a;
    printf("Enter the total marks : \n");
    scanf("%d",&a);
   if(a>=400){
        printf("Grade A");
    }
    else if(a>=300&&a<=400){
        printf("Grade B");
    }
     else if(a>=200&&a<=300){
        printf("Grade C");
    }
     else if(a>=100&&a<=200){
        printf("Grade D");
    }
    else 
    printf("Failed");
    
    
}