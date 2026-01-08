/*#include <stdio.h>

int main()
{
    int n, bin[32], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    while (n > 0)
    {
        bin[i++] = n % 2;
        n = n / 2;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);

    return 0;
}*/
/*
#include <stdio.h>

int main()
{
    int n;
    int bin[32], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        bin[i++] = n & 1;
        n = n >> 1;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);

    return 0;
}
*/

#include <stdio.h>

void decToBin(int n)
{
    if (n == 0)
        return;
    decToBin(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Binary = ");
    decToBin(n);
    return 0;
}
