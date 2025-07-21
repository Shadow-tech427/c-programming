#include<stdio.h>
int main()
{
    float costprice, sellingprice, profitloss;

    printf("Enter the costprice: ");
    scanf("%f", &costprice);

    printf("Enter the sellingprice: ");
    scanf("%f", &sellingprice);

    if (sellingprice > costprice) {
        profitloss = sellingprice - costprice;
        printf("The seller made profit of %.2f\n", profitloss);
    }
    else if (costprice > sellingprice) {
        profitloss = costprice - sellingprice;
        printf("The seller incurred a loss of %.2f\n", profitloss);
    }
    else {
        printf("No profit, no loss\n");
    }
    return 0;
}