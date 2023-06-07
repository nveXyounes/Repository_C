#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);
    
    result = isspace(c);

    if (result == 0)
    {
        printf("Not a white-space character.");
    }
    else
    {
        printf("White-space character.");
    }

    return 0;
}