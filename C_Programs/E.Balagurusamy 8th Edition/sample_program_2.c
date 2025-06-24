#include <stdio.h>

int main()
{
    float a = 4.5, b = 123.78;
    float amount = 30.75 + 75.35;

    printf("%5.2f", amount); // Print amount, width 5, 2 decimals
    printf("%7.2f\n", a);    // Print a, width 7, 2 decimals   ***4.50
    printf("%7.2f\n", b);    // Print b, width 7, 2 decimals   *123.78

    return 0;
}
