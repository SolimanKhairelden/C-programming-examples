#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter number\n");
    scanf("%d", &x);

    if (x>5)
        printf("The number is greater than 5\n");

    else if (x<5)
        printf("The number is lower than 5\n");

    else
        printf("The number is equal 5\n");
    return 0;
}
