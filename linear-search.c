/*
Linear Search
does NOT require sorted array
*/

#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    // Key to search
    int key, i;

    printf("Enter number to search: ");
    scanf("%d", &key);

    // Check each element one by one
    for (i = 0; i < 5; i++)
    {
        // Check if current element is the key
        if (a[i] == key)
        {
            printf("Element found");
            return 0;
        }
    }

    // If the key is not found
    printf("Element not found");

    return 0;
}
