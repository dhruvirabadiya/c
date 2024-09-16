#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insert_end(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = temp;
        temp->prev = ptr;
    }
}

void delete_end()
{
    if (head == NULL)
    {
        printf("List is already empty!\n");
        return;
    }

    struct node *ptr = head;
    struct node *p;

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
}

void insert_first(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        head = temp;
        temp->next = ptr;
        ptr->prev = temp;
    }
}

void delete_first()
{
    if (head == NULL)
    {
        printf("List is already empty!\n");
        return;
    }

    struct node *ptr = head;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        head = head->next;
        head->prev = NULL;
        free(ptr);
    }
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("The List is already empty....\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d \t", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    do
    {
        printf("\nPress 1 for Insert End");
        printf("\nPress 2 for Delete End");
        printf("\nPress 3 for Insert First");
        printf("\nPress 4 for Delete First");
        printf("\nPress 5 for Display");
        printf("\nPress 6 to Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
        {
            int num;
            printf("Enter a number you want to add to the list: ");
            scanf("%d", &num);
            insert_end(num);
            printf("Node Inserted\n");
            break;
        }
        case 2:
            delete_end();
            printf("Node Deleted\n");
            break;
        case 3:
        {
            int num;
            printf("Enter a number you want to add to the list: ");
            scanf("%d", &num);
            insert_first(num);
            break;
        }
        case 4:
            delete_first();
            printf("Node Deleted\n");
            break;
        case 5:
            printf("Printing Values...\n");
            display();
            break;
        case 6:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid input...!!\n");
        }
    } while (n != 6);

    return 0;
}
