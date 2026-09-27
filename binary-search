/* 
Binary Search
requires sorted array
*/

#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    // Key to search
    int key;

    // Start and end position
    int low = 0, high = 4, mid;

    printf("Enter number to search: ");
    scanf("%d", &key);

    // To search while range is valid
    while (low <= high)
    {
        // Find the middle position
        mid = (low + high) / 2;

        // Check if middle value is the key
        if (a[mid] == key)
        {
            printf("Answer found");
            return 0;
        }

        // Search in the left half
        else if (key < a[mid])
        {
            high = mid - 1;
        }

        // Search in the right half
        else
        {
            low = mid + 1;
        }
    }

    // If the key is not found
    printf("Answer not found");

    return 0;
}
