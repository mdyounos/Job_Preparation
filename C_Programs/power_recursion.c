#include <stdio.h>

// Recursive function to calculate n^r
int Power(int n, int r) {
    if (r == 0)
        return 1;
    else
        return n * Power(n, r - 1);
}

int main() {
    int n, r;
    printf("Enter base and exponent: ");
    scanf("%d %d", &n, &r);

    int result = Power(n, r);
    printf("%d^%d = %d\n", n, r, result);

    return 0;
}
