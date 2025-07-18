#include<stdio.h>
int main()
{
    int id1, id2, id3;
    char name1[50], name2[50], name3[50];
    float pquanty1, pquanty2, pquanty3;
    int p1, p2, p3;
    float total, disper, payamt, disamt;

    FILE*fp;
    fp=fopen("product2.txt","w");

    printf("Enter product id:");
    scanf("%d", &id1);
    printf("Enter product name:");
    scanf("%s", &name1);
    printf("Enter product price:");
    scanf("%d", &p1);
    printf("Enter product quantity:");
    scanf("%d", &pquanty1);

    printf("Enter product id:");
    scanf("%d", &id2);
    printf("Enter product name:");
    scanf("%s", &name2);
    printf("Enter product price:");
    scanf("%d", &p2);
    printf("Enter product quantity:");
    scanf("%d", &pquanty2);

    printf("Enter product id:");
    scanf("%d", &id3);
    printf("Enter product name:");
    scanf("%s", &name3);
    printf("Enter product price:");
    scanf("%d", &p3);
    printf("Enter product quantity:");
    scanf("%d", &pquanty3);

    total = (p1*pquanty1)+(p2*pquanty2)+(p3*pquanty3);

    if(total>=100000)
    {
        disper=10;
    }
    else if(total>=80000)
    {
        disper=8;
    }
    else if(total>=50000)
    {
        disper=5;
    }
    else if(total>=30000)
    {
        disper=3;
    }
    else{
        disper=0;
    }
    disamt=(total*disper)/100;
    payamt=total-disamt;

    printf("\nTotal is          :%.2f\n",total);
    printf("\nAmount is         :%.2f\n",disamt);
    printf("\nPercentage is     :%.2f\n",payamt);

    fprintf(fp,"--------------------result--------------------\n\n");
    fprintf(fp,"PRODUCT 1\n");
    fprintf(fp,"\nProduct Name    :%s\n",name1);
    fprintf(fp,"\nProduct Id      :%d\n",id1);
    fprintf(fp,"\nProduct Price   :%d\n",p1);
    fprintf(fp,"\nProduct Quantity:%d\n\n",pquanty1);

    fprintf(fp,"PRODUCT 2\n");
    fprintf(fp,"\nProduct Name    :%s\n",name2);
    fprintf(fp,"\nProduct Id      :%d\n",id2);
    fprintf(fp,"\nProduct Price   :%d\n",p2);
    fprintf(fp,"\nProduct Quantity:%d\n\n",pquanty2);

    fprintf(fp,"PRODUCT 3\n");
    fprintf(fp,"\nProduct Name    :%s\n",name3);
    fprintf(fp,"\nProduct Id      :%d\n",id3);
    fprintf(fp,"\nProduct Price   :%d\n",p3);
    fprintf(fp,"\nProduct Quantity:%d\n\n",pquanty3);

    fprintf(fp,"\nProduct Total     :%.2f\n",total);
    fprintf(fp,"\nProduct Disper    :%.2f\n",disper);
    fprintf(fp,"\nProduct Dis_amt   :%.2f\n",disamt);
    fprintf(fp,"\nProduct Pay_amt   :%.2f\n",payamt);

    return 0;
}