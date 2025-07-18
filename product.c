#include<stdio.h>
int main()
{
    int id1,id2,id3,q1,q2,q3,p1,p2,p3;
    float total,disper,payamt,disamt;
    char name1[30],name2[30],name3[30];
    FILE*fp;
    fp=fopen("product.txt","w");
  
    printf("Enter  product id:");
    scanf("%d%d%d",&id1,&id2,&id3);
    
    printf("Enter product name:");
    scanf("%s%s%s",&name1,&name2,&name3);

    printf("Enter 1 st product price:");
    scanf("%d%d%d",&p1,&p2,&p3);

    printf("Entr quntity:");
    scanf("%d%d%d",&q1,&q2,&q3);

    total=(p1*q1)+(p2*q2)+(p3*q3);
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
    payamt = total-disamt;
    printf("\nTotal is      :%.2f:\n",total);
    printf("\nD Amount      :%.2f\n",disamt);
    printf("\nD Percentage  :%.2f\n",payamt);
    

    fprintf(fp,"-------------------result------------------\n\n");
    fprintf(fp,"PRODUCT 1\n");
    fprintf(fp,"\nProduct Name    :%s\n",name1);
    fprintf(fp,"\nProduct ID      :%d\n",id1);
    fprintf(fp,"\nProduct Price   :%d\n",p1);
    fprintf(fp,"\nProduct Quantity:%d\n\n",q1);

    fprintf(fp,"PRODUCT 2\n");
    fprintf(fp,"\nProduct Name    :%s\n",name2);
    fprintf(fp,"\nProduct ID      :%d\n",id2);
    fprintf(fp,"\nProduct Price   :%d\n",p2);
    fprintf(fp,"\nProduct Quantity:%d\n\n",q2);

    fprintf(fp,"PRODUCT 3\n");
    fprintf(fp,"\nProduct Name    :%s\n",name3);
    fprintf(fp,"\nProduct ID      :%d\n",id3);
    fprintf(fp,"\nProduct Price   :%d\n",p3);
    fprintf(fp,"\nProduct Quantity:%d\n\n",q3);



    fprintf(fp,"\nProduct Total    :%.2f\n",total);
    fprintf(fp,"\nProduct Disper   :%.2f\n",disper);
    fprintf(fp,"\nProduct Dis_amt  :%.2f\n",disamt);
    fprintf(fp,"\nProduct Pay_amt  :%.2f\n",payamt);

     return 0;

} 