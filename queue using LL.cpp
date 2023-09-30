#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int data;
	struct st *next;
}node;

node *front=NULL;
node *rear=NULL;

void insert()
{
	int ch=1;
	node *newnode;
	
	while(ch)
	{
	newnode=(node*)malloc(sizeof(node));
     printf("Enter the data part: ");
     scanf("%d",&newnode->data);
	//newnode->data=x;
	newnode->next=NULL;
	if(front==NULL&& rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	printf("Do You want to continue(1/0): ");
	scanf("%d",&ch);
	}
}

void remove()
{
	node *temp;
	temp=front;
	if(front==NULL&& rear==NULL)
	{
		printf("List is empty!");
	}
	else
	{
		printf("\nThe deleted queue is: %d",temp->data);
		front=front->next;
		free(temp);
	}
}

void display()
{
	node *temp;
	if(front==NULL&& rear==NULL)
	{
		printf("List is empty!");
	}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("NULL");
		
	}
}

int main()
{
	int ch;
	int choice,x;
    while (1)
    {
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
//            printf("Enter the number which you want insert: ");
//            scanf("%d",&x);
            insert();
            break;
            
            case 2:
            remove();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(1);
            
            default:
            printf("Wrong choice! \n");
        } 
    }
    
	return 0; 
}
