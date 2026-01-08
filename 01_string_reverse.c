#include <stdio.h>
#include <string.h>

void reverse(char str[], int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[] = "my name is gpt";
    int start = 0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("%s\n", str);
    return 0;
}