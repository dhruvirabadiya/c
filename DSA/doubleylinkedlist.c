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
    struct node *ptr = head;
    struct node *p;

    if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
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
    struct node *ptr;
    if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
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
        printf("The List Is Already Empty....");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d \t", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n \n");
}

int main()
{
    int n;
    do
    {
        printf("\n Press 1 For Insert End");
        printf("\n Press 2 For Delete_End");
        printf("\n Press 3 For Insert First");
        printf("\n Press 4 For Delete First");
        printf("\n Press 5 For Display");

        printf("\n");
        printf("Enter Your Choice:");
        scanf("%d", &n);

        if (n <= 0 || n > 7)
        {
            printf("\n Invalid Input....!!");
        }

        if (n == 1)
        {
            int num;
            printf("Enter A Number You Want To Add In The List:");
            scanf("%d", &num);
            insert_end(num);
            printf("Node Inserted \n");
        }
        else if (n == 2)
        {
            delete_end();
            printf("Node Deleted \n");
        }
        else if (n == 3)
        {
            int num;
            printf("Enter A Number You Want To Add In The List:");
            scanf("%d", &num);
            insert_first(num);
        }
        else if (n == 4)
        {
            delete_first();
            printf("Node Deleted \n");
        }
        else if (n == 5)
        {
            printf("\n Printing Values....\n");
            display();
        }
    } while (n > 0 || n <= 7);
}