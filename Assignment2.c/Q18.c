#include<stdio.h>
int main()
{
    int days;
    float fine;

    printf("Enter the date the book is returned late: ");
    scanf("%d", &days);

    if (days <= 0) {
        fine = 0;
        printf("No fine. The book is returned on time.\n");
    }
    else if (days <= 5) {
        fine = days * 1.0;
    }
    else if (days <= 10) {
        fine = days * 2.0;
    }
    else {
        fine = days * 5.0;
    }

    if (days > 0) {
        printf("The fine is: Rs. %.2f\n", fine);
    }

    return 0;
}