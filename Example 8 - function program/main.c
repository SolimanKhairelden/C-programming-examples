#include <stdio.h>
#include <stdlib.h>

//function prototype
void my_function (void);

int main()
{
    printf("Hello to my main function!\n");

    my_function();

    printf("Back again to my main function!\n");
    return 0;
}

//function definition
void my_function (void)
{
    printf("Hello to my sub-function!\n");
}
