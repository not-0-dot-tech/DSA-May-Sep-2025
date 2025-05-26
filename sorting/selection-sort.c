// selection sort in C

#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++) // pick an element
    {
        for (int j = i + 1; j <= n - 1; j++) // comparison
        {
            if (arr[j] < arr[i]) // swap if smaller
            {
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;

                // using XOR swap
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) // input array
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) // output sorted array
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
