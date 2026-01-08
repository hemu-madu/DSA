// #include <stdio.h>

// int main()
// {
//     int a, b, gcd;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }

//     gcd = a;
//     printf("GCD (HCF) = %d", gcd);

//     return 0;
// }


#include <stdio.h>

int bitwiseGCD(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;

    // Count common factors of 2
    int shift = 0;
    while (((a | b) & 1) == 0)
    {
        a >>= 1;
        b >>= 1;
        shift++;
    }

    // Make a odd
    while ((a & 1) == 0)
        a >>= 1;

    do
    {
        // Make b odd
        while ((b & 1) == 0)
            b >>= 1;

        // Ensure a <= b
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        b = b - a;

    } while (b != 0);

    return a << shift;
}

int main()
{
    int a = 48, b = 18;
    printf("GCD = %d", bitwiseGCD(a, b));
    return 0;
}