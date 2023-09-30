#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linklistprint(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertionfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *insertionanypos(struct Node *head, int data, int pos)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    p = p->next;
    int i = 0;
    while (i != pos - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* insertionatend(struct Node* head , int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while(p -> next != head)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=head;
  
    return head;

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 16;
    fourth->next = head;
    printf("befor insertion:\n");
    linklistprint(head);
    // head = insertionfirst(head, 5);
    printf("after insertion:\n");
   // head = insertionanypos(head, 10, 2);
   head=insertionatend(head,18);
    linklistprint(head);

    return 0;
}