#include <stdio.h>

main()
{
    int i, n, pos, element;

    // Insert operation
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    for (i=n-1; i>=pos-1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete operation
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Update operation
    printf("Enter the position of the element to be updated: ");
    scanf("%d", &pos);

    printf("Enter the new value: ");
    scanf("%d", &element);

    arr[pos - 1] = element;

    printf("Array after update: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
