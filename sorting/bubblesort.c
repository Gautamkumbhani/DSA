#include<stdio.h>
#include<stdlib.h>
#define n 15
void bubbleshort(int a[])
{
    int i,j,y;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                y = a[j];
                a[j] = a[j+1];
                a[j+1] = y;
            }
        }
    }
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
    // ascending Order
    bubbleshort(arr);
    printf("\n\nsorted arry: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

}