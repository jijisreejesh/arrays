#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("Operations:*,/,+,-");
     printf("Enter an opeartion : ");
    scanf("%c",&c);
    printf("\nEnter 2 numbers : ");
    scanf("%d%d",&a,&b);
   
   /* switch (c) 
    {
        case '/':
            printf("Case 1 is Matched.");
            break;

        case '+':
            printf("Case 2 is Matched.");
            break;

        case '*':
            printf("Case 3 is Matched.");
            break;

        default:
            printf("Default case is Matched.");
    }*/
  
    switch (c)
    {
        case '*':
                printf("%d*%d=%d",a,b,a*b);
                break;
        case '/':
                printf("%d/%d=%d",a,b,a/b);
                break;
         case '+':
                printf("%d+%d=%d",a,b,a+b);
                break;
        case '-':
                printf("%d-%d=%d",a,b,a-b);
                break;
        default:
                printf("Enter a valid opeartion");        
    }
}