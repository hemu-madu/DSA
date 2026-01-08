#include <stdio.h>
#include <stdbool.h>

bool isEven(int n)
{
    return (n & 1) == 0;
}

int main()
{
    int n = 15;

    if (isEven(n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}