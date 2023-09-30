#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

struct Node* insertionatbeg(struct Node* head, int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
   // struct Node* ptr = head;
    ptr->data=data;
    ptr->next=head;
    head=ptr;
}

struct Node* insertionatanypos(struct Node* head, int data, int pos)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i=0;
    while(p!=pos-1)
    {
        p = p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;

    return head;
}

struct Node* insertionatend(struct Node* head, int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
void printinsertion(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("ELEMENT:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int pos=0,data,ans;
    char nch;


    
   nch = y;
   do
   {
   if ( nch== y || Y)
   {
    /* code */
   
   
    {
        printf("\nWhere do you want to Creat a Node:\n1.AT BEGGNING\n2.AT MIDDLE\n3.AT END\n");
        printf("\nSelect above choice: ");
        scanf("SELECT:%d\n",&ans);
        switch (ans)
        {
        case 1:
        {
            printf("Enter the value:\n");
            scanf("%d",&data);
            insertionatbeg( head ,data);
            printinsertion(head);
            break;
        }

        case 2:
        {
            printf("Enter the Value:\n");
            scanf("%d",&data);
            printf("Enter the Position:\n");
            scanf("%d",&pos);
            head = insertionatanypos(head,data,pos);
            printinsertion(head);
            break;
        }

        case 3:
        {
            printf("Enter the value:\n");
            scanf("%d",&data);
            head = insertionatend(head,data);
            printinsertion(head);
            break;
        }
           
        
        default:
                printf("ENTERED WRONG CHOICE");
            break;
        }
    }
   }
     printf("Do you want Creat Node(y/n):\n");
    scanf("choose:%c",&ans);
    } while(nch== y || Y );


    return 0;
}