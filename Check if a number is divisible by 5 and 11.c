#include <stdio.h>

int main() {
    int num = 55;
    if (num % 5 == 0 && num % 11 == 0)
        printf("Divisible by 5 and 11\n");
    else
        printf("Not divisible by 5 and 11\n");
    return 0;
}
