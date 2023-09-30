#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	struct st *prev;
	int data;
	struct st *next;

}node;
 
node *head=NULL, *ptr=NULL;
 
void display()
{
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");
}

void deleteatfirst()
{
	node *p=head;
	head=head->next;
	free(p);
}

void deleteatlast()
{
	node *p=head;
	node *q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
}

void deleteatindex(int pos)
{
	int step=1;
	ptr=head;
	while(step<pos)
	{
		ptr=ptr->next;
		step++;
	}
	(ptr->prev)->next=ptr->next;
	(ptr->next)->prev=ptr->prev;
	free(ptr);
	ptr=NULL;
}

int main()
{
	node *second, *third, *fourth;
	
	head=(node*)malloc(sizeof(node));
	//ptr=(node*)malloc(sizeof(node));
	//ptr=head;
	second=(node*)malloc(sizeof(node));
	third=(node*)malloc(sizeof(node));
	fourth=(node*)malloc(sizeof(node));
	
	head->data=10;
	head->prev=NULL;
	head->next=second;
	
	second->data=20;
	second->prev=head;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	third->prev=second;
	
	fourth->data=40;
	fourth->next=NULL;
	fourth->prev=third;
	
	
//	printf("%d",head->data);
//	printf("\n%d",head->next);
//	printf("\n%d",head->prev);
    display();
   // deleteatfirst();
  // deleteatlast();
  deleteatindex(2);
    printf("After deletion the linked is:\n");
    display();
	return 0;
}