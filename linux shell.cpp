// C program to calculate the product of
// two binary numbers

#include <stdio.h>

int binaryProduct(int binNum1, int binNum2)
{
    int i = 0;
    int rem = 0;
    int product = 0;
    int sum[20] = { 0 };

    while (binNum1 != 0 || binNum2 != 0) {

        sum[i] = (binNum1 % 10 + binNum2 % 10 + rem) % 2;
        rem = (binNum1 % 10 + binNum2 % 10 + rem) / 2;

        binNum1 = binNum1 / 10;
        binNum2 = binNum2 / 10;

        i = i + 1;
    }

    if (rem != 0)
        sum[i] = rem;

    while (i >= 0) {
        product = product * 10 + sum[i];
        i = i - 1;
    }

    return product;
}

int main()
{
    long binNum1 = 0;
    long binNum2 = 0;
    long product = 0;

    int digit = 0;
    int factor = 1;

    printf("Enter Number1: ");
    scanf("%ld", &binNum1);

    printf("Enter Number2: ");
    scanf("%ld", &binNum2);

    while (binNum2 != 0) {
        digit = binNum2 % 10;

        if (digit == 1) {
            binNum1 = binNum1 * factor;
            product = binaryProduct(binNum1, product);
        }
        else {
            binNum1 = binNum1 * factor;
        }

        binNum2 = binNum2 / 10;
        factor = 10;
    }

    printf("Product of numbers: %ld", product);

    return 0;
}

