#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character '%c' is vowel.\n", ch);
        } else {
            printf("The character '%c' is consonant.\n", ch);
        }
    } else {
        printf("The character '%c' is not lowercase alphabet.\n", ch);
    }
    return 0;
}