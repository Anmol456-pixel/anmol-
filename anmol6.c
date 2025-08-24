#include <stdio.h>
int main() {
    int a = 10, b = 20;
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    printf("Quotient = %d\n", b / a);  // to avoid divide-by-zero
    return 0;
}
