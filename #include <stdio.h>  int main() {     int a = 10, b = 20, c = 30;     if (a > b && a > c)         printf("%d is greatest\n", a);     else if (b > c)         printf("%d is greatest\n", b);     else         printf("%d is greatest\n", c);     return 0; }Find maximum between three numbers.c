#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    if (a > b && a > c)
        printf("%d is greatest\n", a);
    else if (b > c)
        printf("%d is greatest\n", b);
    else
        printf("%d is greatest\n", c);
    return 0;
}
