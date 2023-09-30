#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void enQueue(int);
void deletion();
void display();

int queue[SIZE],front=-1,rear=-1;


int main()
{
	int value,choice;
	
	while(1)
	{
		printf("\n***MENU***\n");
		printf("1.Insertion\n 2.Deletion\n 3.Display\n 4.Exit\n");
		scanf("%d",&choice);

	switch(choice)
	{
	
		  case 1:
		   printf("Enter the value to be Insert:");
		   scanf("%d",&value);
		   enQueue(value);
		   break;
		   
		   case 2:
		   deletion();
		   break;
		   
		   case 3:
		   display();
		   break;
		   
		   case 4:
		   exit(0);
		   break;
		   
		   default:
		   printf("\nWrong selection!!! Try again!!!");	
		}
	}
	return 0;
}

void enQueue(int value)
{
	if(rear==SIZE-1)
    {
    	printf("\nQueue is Overflow!! insertion is not possible!!!");
	}
	else if( front==-1 && rear==-1)
	{
		front=rear=0;
	}
	else
	{
		rear++;
		queue[rear]=value;
	}
}

void display()
{
	if(rear==-1)
    {
		printf("\nQueue is Empty!!!");
     }
	else
	{
		int i;
		printf("\nQueue elements are :\n");
		for(i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
	}
}
 void deletion()
 {
 	if(front==-1 && front>rear)
 	{
 		printf("Queue is underflow!");
	}
	else
	{
		printf("%d is delete from queue!",queue[front]);
		front++;
	}
 }