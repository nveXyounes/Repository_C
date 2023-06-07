#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, alphabets = 0, numbers = 0, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i]; i++) {
        if (isspace(str[i])) {
            spaces++;
        } else if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            numbers++;
        }
    }

    printf("Spaces: %d\nAlphabets: %d\nNumbers: %d\n", spaces, alphabets, numbers);

    return 0;
}
  