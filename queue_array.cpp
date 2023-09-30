#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
	
	if(rear==N-1)
	{
		printf("Overflow Condition");
	}
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Underflow condtion");
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		printf("dequeue Element %d\n",queue[front]);
		front++;
	}
}

void display()
{
	if(front==-1 && rear==-1)
	{
		printf("No element emplty queue\n");
	}
	else
	{
		for(int i=front; i<=rear; i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}

void peek()
{
	if(front==-1 && rear==-1)
	{
		printf("No element emplty queue\n");
	}
	else
	{
		printf("%d",queue[front]);
	}
}

int main()
{
	int front=-1;
	int rear=-1;
	int ch,x;
	while(1)
	{
	
	   printf("Enter your choice:\n 1.enqueue\n 2.dequeue\n 3.peek\n 4.display\n");
	   scanf("%d",&ch);
		switch(ch)
		{ 
			case 1:
				{
//					printf("Enter the element\n");
//					scanf("%d",&x);
					enqueue(x);
					break;
				}
			case 2:
				{
					dequeue();
					break;
				}
			case 3:
				{
					peek();
					break;
				}
			case 4:
				{
					display();
					break;
				}
			default : 
			{
				printf("incorrect\n");
				break;
			}
		}
	}
	
	return 0;
}