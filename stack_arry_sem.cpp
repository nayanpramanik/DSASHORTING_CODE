#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack [N],top=-1;
void push()
{

	int x;

	if(top==N-1)
	{
		printf("Stack is overflow");
	}
	else
	{
  		printf("Enter the element to push in stack:\n");
		scanf("%d",&x);
		top++;
		stack[top] = x;
	}
}
void pop()
{
	int iteam;
	if(top==-1)
	{
		printf("Stack is Underflow");
	}
	else
	{
		iteam=stack[top];
		top--;
		printf("Pop element of stack is %d",stack[top]);
	}
}

void display()
{
	int i;
	for(i=top; i>=0; i--)
	{
		printf("\nElement %d: %d\n",i,stack[i]);
	}
}

void peek()
{
	if(top==-1)
	{
		printf("Underflow no element");
	}
	else
	{
		printf("Peek element of stack is: %d",stack[top]);
	}
}

int main()
{
	top=-1;
	int ch;
	
	while(1)
	{

	printf("\n1.Push\n");
	printf("2.Pop\n");
	printf("3.peek\n");
	printf("4.Display\n");
	printf("Enter the above choice: ");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
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
				printf("incorrect choice\n");
				break;
		}
	}
	
	return 0;
}