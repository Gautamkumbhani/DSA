#include <stdio.h>
#include<stdlib.h>
#define n 8
int top = -1, a[n],i;
int display()
 {
        printf("\n");
    if (top < 0) 
    {
        printf("array is empty.\n");
        //  return;
    }
    else
    {
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    }
}

int push(int value) 
{
    if (top >=n - 1) 
    {
        printf("array overflow. Push operation failed.\n");
        //  return;
    }
    else
    {
    top++;
    a[top] = value;
    }
    
}

void pop()
 {
    if (top < 0) {
        printf("array underflow. Pop operation failed.\n");
       
    }
    else
    {
    
    top--;
    }
 }  


int main() {
    
    int ch, value;
    

    do {
        printf("1. Push element to the right end\n");
        printf("2. Pop element from the right end\n");
        printf("3. Display stack elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
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

     
     push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    pop();
    pop();
    pop();


    display();
}