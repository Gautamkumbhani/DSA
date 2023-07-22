#include<stdio.h>
#include<stdlib.h>
#define n 10
void bubbleshort(int a[])
{
    int i,j,y;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                y = a[i];
                a[i] = a[j];
                a[j] = y;
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