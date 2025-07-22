#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57) {
        printf("The character '%c' is digit.\n", ch);
    }
    if (ch >= 65 && ch <= 90) {
        printf("The character '%c' is Uppercase Alphabet.\n", ch);
    }
    if (ch >= 97 && ch <= 122) {
        printf("The character '%c' is Lowercase Alphabet.\n", ch);
    }
    else {
        printf("The character '%c' is neither digit nor alphabet.\n", ch);
    }
    return 0;
}