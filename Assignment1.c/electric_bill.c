#include<stdio.h>
int main()
{
    int unit,Amount = 0;

    printf("Enter a unit: ");
    scanf("%d", &unit);

    if(unit <= 100){
        Amount = unit*8;
    } else {
        if(unit <= 200){
            Amount = (100*8)+(unit-100)*10;
        }else{
            if(unit <= 300){
                Amount = (100*8)+(100*10)+(unit-200)*12;
            }else{
                if(unit <= 400){
                    Amount = (100*8)+(100*10)+(100*12)+(unit-300)*12;
                }else{
                    if(unit <= 500){
                        Amount = (100*8)+(100*10)+(100*12)+(100*12)+(100*15)+(unit-400)*15;
                    }else{
                        Amount = (100*8)+(100*10)+(100*12)+(100*12)+(100*15)+(unit-500)*17;
                    }
                }
            }
        }
    }
    printf("Electric bill for %d units is: %d", unit,Amount);
    return 0;
}