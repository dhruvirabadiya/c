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
        head->next = head;
        head->prev = head;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
        temp->next = head;
        head->prev = temp;
    }
}

void delete_end()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if (head->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = head;
        head->prev = p;
        free(ptr);
    }
}

void insert_first(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->prev = NULL;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        head->next = head;
        head->prev = head;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        temp->next = head;
        head->prev = temp;
        ptr->next = temp;
        temp->prev = ptr;
        head = temp;
    }
}

void delete_first()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("\nList is Empty...\n");
        return;
    }

    if (head->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        struct node *tail = head->prev;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        free(ptr);
    }
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    else
    {
        while (ptr->next != head)
        {
            printf("%d \t", ptr->data);
            ptr = ptr->next;
        }
        printf("%d \t", ptr->data);
    }
}

int main()
{
    int n;
    do
    {
        printf("\n Press 1 For Insert End");
        printf("\n Press 2 For Delete End");
        printf("\n Press 3 For Insert First");
        printf("\n Press 4 For Delete First");
        printf("\n Press 5 For Display");

        printf("\nEnter Your Choice:");
        scanf("%d", &n);

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
            printf("\nEnter A Number You Want To Add In The List:");
            scanf("%d", &num);
            insert_first(num);
            printf("Node Inserted \n");
        }
        else if (n == 4)
        {
            delete_first();
            printf("Node Deleted \n");
        }
        else if (n == 5)
        {
            printf("\nPrinting Values....\n");
            display();
        }
    } while (n > 0 && n <= 5);

    return 0;
}
