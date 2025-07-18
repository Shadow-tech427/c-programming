#include<stdio.h>
int main()
{
    int unit;
    float amt;

    printf("Enter a unit: ");
    scanf("%d", &unit);

    if(unit >= 100){
        amt = 100*8;
        unit-= 100;
        if (unit >= 100) 
        {
            amt = amt + (100*10);
            unit -= 100;
            if (unit >= 100)
            {
                amt = amt + (100*12);
                unit -= 100;
                if (unit >= 100)
                {
                    amt = amt + (100*15);
                    unit -= 100;
                    if (unit >= 100)
                    {
                        amt = amt + (100*17);
                        unit -= 100;
                        if (unit >= 100)
                        {
                            amt = amt + (100*20);
                            unit -= 100;
                        }else
                            amt = amt+(unit*20);
                    }else
                        amt = amt+(unit*17);
                }else
                    amt = amt+(unit*15);
            }else
                amt = amt+(unit*12);
        }else
            amt = amt+(unit*10);
    }else
        amt = amt+(unit*8);
    printf("Amount is : %.2f", amt); 
}