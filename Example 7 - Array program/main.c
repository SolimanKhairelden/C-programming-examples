#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for(int i=0; i<n; i++)
        printf("%d\t", arr[i]);

    return 0;
}
