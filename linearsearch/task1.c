#include <stdio.h>
#include <stdlib.h>
# define n 15
int linearSearch(int arr[], int a)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[n],i, a;
    for(i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter search element: ");
    scanf("%d",&a);
    

    int result = linearSearch(arr, a);
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index %d\n", result);
    }

    return 0;
}