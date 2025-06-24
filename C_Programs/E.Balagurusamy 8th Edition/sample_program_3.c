#include <stdio.h>
#define PERIOD 10
#define PRINCIPAL 5000.00

int main()
{
    int year;
    float amount, value, inrate;
    amount = PRINCIPAL;
    inrate = .11;
    year = 0;
    while (year <= PERIOD)
    {
        printf("%2d %8.2f\n", year, amount);
        value = amount + inrate * amount;
        year++;
        amount = value;
    }
    return 0;
}