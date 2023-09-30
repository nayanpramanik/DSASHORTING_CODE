#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next; 
};

void linklistprint(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node* insertionatfirst(struct Node* head, int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data=data;
    head=ptr;
}
struct Node* insertionatbetween(struct Node* head ,int data,int INDEX)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while(i!=INDEX-1)
    {
        p = p->next;
        i++;
    }
     ptr->data = data;
     ptr->next = p->next;
     p->next=ptr;
     return head;
}

struct Node* instertionatend(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct  Node* p = head;
    while(p->next  != NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node* deletionfirst(struct Node* head)
{
    struct node* ptr=head;
    head = head -> next;
    free(ptr);
    return head;
}

struct Node* deletionatany(struct Node* head,int pos)
{
    struct Node* p = head;
    struct Node* q = head->next;
   
   for(int i=0; i<pos-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
  //  p->next=NULL;
    free(q);
    return head;
}

struct Node* deletionatend(struct Node* head)
{
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fouth;


    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fouth=(struct Node*)malloc(sizeof(struct Node));

    head -> data=7;
    head -> next=second;

    second -> data = 9;
    second -> next = third;

    third -> data = 12;
    third -> next = fouth;

    fouth -> data = 16;
    fouth -> next = NULL; 

    //head = insertionatfirst(head,15);
   // head = insertionatbetween(head,3,2);
   printf("Linklist before deletion:\n");
     linklistprint(head);
    printf("Linklist after deletion:\n");
  //  head=instertionatend(head,20);
  //head=deletionfirst(head);
 // head=deletionatany(head,2);
    head=deletionatend(head);
     linklistprint(head);
    return 0;
}