#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
void Insert_End(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    if (head == NULL && tail == NULL) 
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void Delete_end()
{
    struct node *ptr = tail;
    struct node *p = head;
    if (head == NULL)
    {
        printf("\nList is Empty......\n");
        return;
    }
    else if (head == tail)
    {
        head == NULL;
        tail == NULL;
        free(ptr);
        return;
    }
    while (p->next != ptr)
    {
        p = p->next;
    }
    p->next = head;
    tail = p;
    free(ptr);
}

void Insert_first(int val)
{

    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
    tail->next = head;
}

void Delete_first()
{
    if (head == NULL)
    {
        printf("\nList is Empty......\n");
    }

    if (head == tail)
    {
        head = NULL;
        tail = NULL;
        return;
    }
    struct node *ptr = head;
    head = ptr->next;
    tail->next = head;
    free(ptr);
}

void Insert_mid(int num, int pos)
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

void Delete_mid(int pos)
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

void Display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List Is Already Empty....!");
    }
    else
    {
        while (ptr->next != head)
        {
            printf("%d \t", ptr->data);
            ptr = ptr->next;
        }
        printf("%d \n", ptr->data);
    }
    printf("\n");
}

int main()
{
    int n, pos;
    do
    {
        printf("\n Press 1 For Insert End");
        printf("\n Press 2 For Delete End");
        printf("\n Press 3 For Insert First");
        printf("\n Press 4 for Delete First");
        printf("\n Press 5 For Insert Mid");
        printf("\n Press 6 For Delete Mid");
        printf("\n Press 7 For Display");
        printf("\n");

        printf("Enter Your Choice:");
        scanf("%d", &n);

        if (n <= 0 && n >= 7)
        {
            printf("Invalid Input.... \n");
        }

        if (n == 1)
        {
            int num;
            printf("Enter a Number You Want To Add In List:");
            scanf("%d", &num);
            Insert_End(num);
            printf("Node inserted \n");
        }
        else if (n == 2)
        {
            Delete_end();
             printf("Node deleted \n");
        }
        else if (n == 3)
        {
            int num;
            printf("Enter The Number You Want To Add In List:");
            scanf("%d", &num);
            Insert_first(num);
             printf("Node inserted at begining \n");
        }
        else if (n == 4)
        {
              Delete_first();
              printf("Node deleted begining\n");
        }
        else if (n == 5)
        {
            int num;
            printf("Enter A Position Where You Can Add Your New Number:");
            scanf("%d", &pos);
            Display();

            printf("Enter A Number You Want To Add In List:");
            scanf("%d", &num);

            Insert_mid(pos, num);
            Display();
            printf("Node inserted at middle \n");
        }
        else if (n == 6)
        {
            printf("Enter A Position Where You Can Add Data:");
            scanf("%d", &pos);
            Delete_mid(pos);
            Display();
            printf("Node deleted at middle\n");
        }
        else if (n == 7)
        {
            printf("\nprinting values . . . . .\n");
            Display();
        }

    } while (n > 0 || n <= 7);
}