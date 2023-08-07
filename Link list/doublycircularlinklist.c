#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
struct node *head = NULL;
int Display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
        printf("doubly link list....");

        while (ptr->next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}
void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    if (head == NULL)
    {
        temp->next = temp;
        temp->pre = temp;
        head = temp;
        return;
    }
    else
    {
         while(ptr->next != head)
                ptr = ptr->next;
        ptr->next = temp;
        temp->pre = ptr;
        temp->next = head;
        head->pre = temp;
        return;
    
    }
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
  
    if (head == NULL)
    {
        printf("Last is empty");
        return;
    }
    if(ptr->next == head)
    {
        free(ptr);
        head = NULL;
        return;
    }
    else
    {
    
         while(ptr->next != head){
                p = ptr;
                ptr = ptr->next;
         }
        p->next = head;
        head->pre = p;
        free(ptr);
    
    }
    
}
void firstInsert(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    if (head == NULL)
    {
        temp->next = temp;
        temp->pre = temp;
        head = temp;
        return;
    }
    else
    {
         while(ptr->next != head)
                ptr = ptr->next;
        ptr->next = temp;
        temp->pre = ptr;
        temp->next = head;
        head->pre = temp;
        head = temp;
        return;
    }
}
void firstDelete()
{
    struct node *temp = head;
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("list is empty....\n");
        return;
    }
    else if (temp->next == head)
    {
        head = NULL;
        free(temp);
        return;
    }
    else
    {
        while(ptr->next !=head)
                ptr = ptr->next;
        ptr->next = temp->next;
        temp->next->pre = ptr;
        head = temp->next;
        free(temp);
        return;
    }
}
void midInsert(int val, int position)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    while (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

void midDelete()
{
    struct node *ptr = head;
    struct node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}

int main()
{
    int ch, val, position;
        printf("1. insertend element\n");
        printf("2. deleteend element \n");
        printf("3. firstinsert element \n");
        printf("4. firstdelete element \n");
        printf("5. midinsert element\n");
        printf("6. middelete element \n");
        printf("7. Display  elements\n");
        printf("0. Exit\n");
    do
    {
        
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &val);
            insertEnd(val);
            break;
        case 2:
            deleteEnd();
            break;
        case 3:
            printf("Enter the element to insert: ");
            scanf("%d", &val);
            firstInsert(val);
            break;
        case 4:
            firstDelete();
            break;
        case 5:
            printf("Enter the element to midinsert: ");
            scanf("%d", &val);
            printf("Enter the position: ");
            scanf("%d", &position);
            midInsert(val, position);
            break;
        case 6:
            printf("Delete the position: ");
            scanf("%d", &position);
            midDelete();
            break;
        case 7:
            Display();
            break;
        case 0:
            break;
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }

    } while (ch != 0);
}