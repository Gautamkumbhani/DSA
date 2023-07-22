#include<stdio.h>
#define n 5
int f = -1,r = -1;
int a[n];
int display()
{
    int i;
    i = f;
    do
    {
        printf("%d ",a[i]);
        i = (i=1) % n;

    } while (i != (r+1)%n);
    printf("\n");
}

int insert(int val)
{
    if ((r+1)% n == f)
    {
        printf("Array is full\n");
    }
    else if (r<0)
    {
        f = r = 0;
        a[r] = val;
    }
    else
    {
        r = (r+1) % n;
        a[r] = val;
    }
    
    
}
int delete()
{
    if (f<0)
    {
        printf("Array is empty\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        (f+1) % n;
    }
}

int main()
{
    int ch, value;
    

    do {
        printf("1. insert element to the right end\n");
        printf("2. delete element from the right end\n");
        printf("3. Display stack elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                 break;
             case 4:
                 break;
             default:
                 printf("Invalid choice. Try again.\n");
                 break;
    }
 }while (ch !=4);
}