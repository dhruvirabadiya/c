#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    return;
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
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void insert_first(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
}
void delete_first()
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}

void insert_mid(int num, int pos)
{
    struct node *ptr = head;
    struct node *p;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = temp;
    temp->next = ptr;
}

void delete_mid(int pos)
{
    struct node *ptr = head;
    struct node *p;
    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("The List Is Already Empty...");
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
    int n, pos;
    do
    {
        printf("\n Press 1 For Insert End");
        printf("\n Press 2 For Delete End");
        printf("\n Press 3 for Insert First");
        printf("\n Press 4 for Delete First");
        printf("\n Press 5 for Insert Mid");
        printf("\n Press 6 for Delete Mid");
        printf("\n Press 7 for Display");
        printf("\n");
        printf("Enter Your choice:");
        scanf("%d", &n);

        if (n <= 0 || n > 7)
        {
            printf("\n Invalid Input!!!! \n");
        }

        if (n == 1)
        {
            int num;
            printf("Enter The Number You Want To Add In The List:");
            scanf("%d", &num);
            insert_end(num);
            printf("Node inserted \n");
        }

        else if (n == 2)
        {
            delete_end();
            printf("Node deleted \n");
        }

        else if (n == 3)
        {
            int num;
            printf("Enter The Number You Want To Add In The List:");
            scanf("%d", &num);
            insert_first(num);
            printf("Node inserted at begining \n");
        }

        else if (n == 4)
        {
            delete_first();
            printf("Node deleted begining\n");
        }

        else if (n == 5)
        {
            int num;
            printf("Enter Position Where You Can Add Your New Number:");
            scanf("%d", &pos);

            display();
            printf("Enter Number You Want To Add In The List:");
            scanf("%d", &num);

            insert_mid(num, pos);
            display();
            printf("Node inserted at middle \n");
        }

        else if (n == 6)
        {
            printf("Enter The Position Where You Can Delete Your Data:");
            scanf("%d", &pos);
            delete_mid(pos);
            display();
            printf("Node deleted at middle\n");
        }

        else if (n == 7)
        {
            printf("\nprinting values . . . . .\n");
            display();
        }
    } while (n > 0 || n <= 7);
}