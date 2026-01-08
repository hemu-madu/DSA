/*#include <stdio.h>
#include <math.h>

int main() {
    double x = 5.7;

    printf("floor = %.0f\n", floor(x));
    printf("ceil  = %.0f\n", ceil(x));

    return 0;
}*/

#include <stdio.h>

int myFloor(float x)
{
    int i = (int)x;
    if (x >= 0 || x == i)
        return i;
    else
        return i - 1;
}

int myCeil(float x)
{
    int i = (int)x;
    if (x <= 0 || x == i)
        return i;
    else
        return i + 1;
}

int main()
{
    float num = -3.2;

    printf("Floor: %d\n", myFloor(num));
    printf("Ceil : %d\n", myCeil(num));

    return 0;
}