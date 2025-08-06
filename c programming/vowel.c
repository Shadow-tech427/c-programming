#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any Alphabet: ");
    scanf("%c", &ch);
    ch = tolower(ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
        printf("vowel");
        break;
        default: printf("consenont");
    }
    return 0;
}