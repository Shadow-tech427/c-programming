#include <stdio.h>

int main() {
    int i,  n, cnt;

    printf("Prime numbers between 1 and 100 are:\n");

    for(i = 2; i <= 100; i++) {
        cnt = 1; 

        for(n = 2; n <= i/2; n++) {
            if(i % n == 0) {
                cnt = 0; 
                break;
            }
        }

        if(cnt == 1) {
            printf("%d ", i);
        }
    }

return 0;
}