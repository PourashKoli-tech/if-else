#include <stdio.h>

int main() {
    char ch = '8';
    if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Not a digit\n");
    return 0;
}
