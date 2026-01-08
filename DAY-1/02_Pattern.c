#include <stdio.h>

int main()
{
    int rows = 20;
    int end = 2;

    for (int i = 0; i < rows; i++) {

        for (int s = 0; s < rows - i - 1; s++)
            printf(" ");

        for (int j = 0; j <= i; j++) {
            if(i==1 || (i==2 && j==1)){
                printf("*");
            }
            else if(i>2 && (j==1 || j==end)){
                printf("*");
            }
            else{
                printf("o");
            }

            if (j < i)
                printf(" ");
        }
        if(i>2){
            end++;
        }

        printf("\n");
    }

    return 0;
}