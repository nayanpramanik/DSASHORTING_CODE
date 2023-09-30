#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
}

struct node *deleteatfirst(struct node *head)
{
	struct node *ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

struct node *deleteatindex(struct node *head,int index)
{
	struct node *p=head;
	struct node *q=head->next;
	for(int i=0; i<index-1; i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}

struct node *deleteatlast(struct node *head)
{
	struct node *p=head;
	struct node *q=head->next;
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
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	
	head= (struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third= (struct node*)malloc(sizeof(struct node));
	fourth= (struct node*)malloc(sizeof(struct node));
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=NULL;
	
	printf("Linked list before deletion:\n");
	display(head);
	
	/*head=deleteatfirst(head);
	printf("\nLinked list after delete at first position:\n");
	display(head);
	
	head=deleteatindex(head,2);
	printf("\nLinked list after delete at 2 position:\n");
	display(head);*/
	
	head=deleteatlast(head);
	printf("\nLinked list after delete at last position:\n");
	display(head);
	
	return 0;
}