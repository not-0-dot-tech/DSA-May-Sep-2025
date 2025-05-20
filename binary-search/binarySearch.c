#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
            return mid;
        else if (k < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    printf("%d\n", binarySearch(arr, n, target));

    return 0;
}

