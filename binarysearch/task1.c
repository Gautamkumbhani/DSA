#include <stdio.h>

int binarySearch(int arr[], int low, int high, int search)
{
    while (low <= high) 
      {
        int mid = (low+high) / 2;

        
        if (arr[mid] == search)
            return mid;


        else if (arr[mid] < search)
            low = mid + 1;

       
        else
            high = mid - 1;
    }

    
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int search = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, search);

    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index %d.\n", result);

    return 0;
}