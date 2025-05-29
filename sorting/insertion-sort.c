#include <stdio.h>

// insertion sort function
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        // shifting logic
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    insertionSort(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
