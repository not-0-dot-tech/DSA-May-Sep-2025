#include <stdio.h>

void mergeSort(int *, int);
void merge(int *, int, int *, int, int *, int);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) // input array
        scanf("%d", &arr[i]);

    mergeSort(arr, n);

    for (int i = 0; i < n; i++) // output sorted array
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

void mergeSort(int *arr, int n)
{
    // base condition
    if (n < 2)
        return;

    int mid = n / 2; // calculate mid value

    int left[mid]; // left sub array
    int right[n - mid]; // right sub array

    // fill values in left sub array
    for (int i = 0; i < mid; i++)
        left[i] = arr[i];

    // fill values in right sub array
    for (int i = mid; i < n; i++)
        right[i - mid] = arr[i];

    mergeSort(left, mid); // call mergeSort over left sub array
    mergeSort(right, n - mid); // call mergeSort over right sub array

    merge(left, mid, right, n - mid, arr, n); // merge left and right sub array into the given array
}

void merge(int *left, int nL, int *right, int nR, int *arr, int n)
{
    // initialize markers
    int i = 0, j = 0, k = 0;

    // place elements
    while (i < nL && j < nR)
    {
        if (left[i] <= right[j])
            // arr[k] = left[i];
            // i++;
            arr[k] = left[i++];
        else
            // arr[k] = right[j];
            // j++;
            arr[k] = right[j++];

        k++;
    }

    // handle leftover elements
    while (i < nL)
        // arr[k] = left[i];
        // i++;
        // k++;
        arr[k++] = left[i++];

    while (j < nR)
        // arr[k] = right[j];
        // j++;
        // k++;
        arr[k++] = right[j++];
}