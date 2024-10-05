#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers:\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 0) {
            break; 
        }

        if (num < 0) {
            goto skip_negative;
        }

        printf("Non-negative number: %d\n", num);

        skip_negative:
        continue; 
    }

    return 0;
}
