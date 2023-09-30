#include<stdio.h>
#include<stdlib.h>

int stack[10];
int top=-1;
int x;

void push(int item)
{
	
	if(top==4)
	{
		printf("Stack overflow");
	}
	else
	{
		int item;
		
/*		printf("Enter your value :");
		scanf("%d",&item);*/
		top=top+1;
		stack[top]=item;
	}
	
}

void pop()
{
	int item;
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		item=stack[top];
		item=item-1;
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d  ",stack[i]);
		}
	}
}

int main()
{
	int choice;
	
	   
	
	while(1)
	{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n4.exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
			printf("Enter the value which you want to insert: ");
			scanf("%d",&x);
			push(x);
					break;
					
			case 2: pop();
					break;
					
			case 3: display();
					break;
					
			case 4: exit(0);
			
		default: printf("Wrong choice entered.");						
		}
	}
	
	return 0;
}