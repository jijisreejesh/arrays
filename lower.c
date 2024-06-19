#include<stdio.h>
#include<string.h>

   void  toLower(char *str)
    {
        int i;
    for (i = 0; str[i]; i++)
     {
        str[i] = tolower(str[i]);
    }
    }

int main() 
{
    char myString[25];
    printf("Enter a string :");
    scanf("%s",&myString);
    toLower(myString);
    printf("Lowercase string: %s\n", myString);
    return 0;
}
