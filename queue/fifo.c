#include<stdio.h>
#define n 5
int f = -1; r = -1;i;
int a[n];
int display()
{
    for ( i = f; i <= r; i++)
    {
        printf("%d ",a[i]);
    }
    
}
int insert(int val)
{
    if (r>=n-1)
    {
        printf("\nArray is full");
    }
    else if (r<0)
    {
        f  = r = 0;
        a[r] = val;
    }
    else
    {
        ++r;
        a[r] = val;
    }
    
}

int firdel()
{
    if (f>=n-1)
    {
        printf("\nArray is empty");
    }
    else if (f==r)
    {
        f = r = -1;
    }
    else
    {
        ++f;
    }   
}

int firstinsert(int val)
{
    if (f==0)
    {
        printf("\nnot inserted....");
    }
    else if (f<0)
    {
        f++;
        r++;
        a[f] = val;
    }
    else
    {
        --f;
        a[f] = val;
    }
    
}

int lastdelete()
{
    if (r<0)
    {
        printf("\nno delete Array....");
    }
    else if (f==r)
    {
        f = r = -1;
    }
    else
    {
        --r;
    }
    
}

int main()
{
    int ch, value;
    

    do {
        printf("1. insert element to the right end\n");
        printf("2. delete element from the right end\n");
        printf("3.firstinsert ekement to the right end\n");
        printf("4.lastdelete element from the left end\n");
        printf("5. Display stack elements\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                firdel();
                break;
            case 3:
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                firstinsert(value);
                break;
            case 4:
                lastdelete();
                break;
            case 5:
                display();
                printf("\n");
                 break;
             case 6:
                 break;
             default:
                 printf("Invalid choice. Try again.\n");
                 break;
    }
 }while (ch !=6);
    
}