#include <stdio.h>

int main()
{
    char var;
    printf("Enter a number : ");
    scanf("%c",&var);
    switch (var) {
        case 'a':
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
            break;
    }

    return 0;
}