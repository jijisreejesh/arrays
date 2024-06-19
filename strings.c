#include<stdio.h>
#include<string.h>
void main()
{
    char c[25],a[]="hai",b[]="warworld";
    gets(c);
    printf("Length of string : %d\n",strlen(c));
    printf("Lowercase string is : %s\n",strlwr(c));
    printf("Upperrcase string is : %s\n",strupr(c));
    printf(" string concatination is : %s\n",strcat(c,"Welcome"));
    printf(" string concatination is : %s\n",strncat(c,"Welcome",3));
    strncat(a,b,3);
    printf(" string concatination is : %s\n",a);
    printf("string copy : %s\n",strcpy(c,"delete"));
    strncpy(a,b,2);
    printf("String copy :%s\n",a);
   if( strcmp(c,"HAi")==0)
    printf("string compared : equal \n");
   else
     printf("string compared : not equal \n");
     printf("string character search : %s\n",strchr(b,'r'));
}

