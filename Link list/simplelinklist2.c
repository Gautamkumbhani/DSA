#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int Display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
    if(head == NULL)
       printf("Last is empty");
    while(ptr->next != NULL)
    {
        p=ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void firstInsert(int val) 
{
    struct node *ptr = head;
    struct node* temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    temp->next = head;
   
     head = temp;
    return;
}
void firstDelete()
 {
  
    struct node* temp = head;

    head = head->next;
    free(temp);
}
void midInsert(int val,int position)
 {
    struct node *ptr= head;
    struct node* temp = (struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    while(ptr->data != position)
    {
        ptr = ptr->next;    
    }
    temp->next = ptr->next;
    ptr->next = temp;
}
   
void midDelete()
 {
    struct node *ptr= head;
    struct node* temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}


int main() 
{
    int ch, val,position;
    do
     {
        printf("1. insertend element\n");
        printf("2. deleteend element \n");
        printf("3. firstinsert element \n");
        printf("4. firstdelete element \n");
        printf("5. midinsert element\n");
        printf("6. middelete element \n");
        printf("7. Display  elements\n");
        printf("8. Exit\n");
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
                midInsert(val,position);
                break;
            case 6:
                printf("Delete the position: ");
                scanf("%d", &position);
                midDelete();
                break;
            case 7:
                Display();
                 break;
             case 8:
                 break;
             default:
                 printf("Invalid choice. Try again.\n");
                 break;
        }
        
    }while (ch !=8);
}