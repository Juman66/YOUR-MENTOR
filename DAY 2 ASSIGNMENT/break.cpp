#include <stdio.h>

int main()
 {
    int num;

    printf("Enter numbers :\n");

    while (1)
	 {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 0) 
		{
            break;
        }

        printf("You entered: %d\n", num);
    }

    printf("Exiting the loop.\n");

    return 0;
}
