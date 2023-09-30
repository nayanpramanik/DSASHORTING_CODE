#include<stdio.h>

int stack[50],ch,n,top,x,i;

void push()
{
	if(top>=n-1)
	{
		printf("Stack overflow!");
	}
	else
	{
		printf("Enter the value which you want to push into stack: ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("Stsck underflow!");
	}
	else
	{
		printf("%d is pop from stack!",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("\nThe elements of Stack is: ");
		for(i=top; i>=0; i--)
		{
			printf("%d\t",stack[i]);
		}
			printf("\nPress another choice: ");
	}
	else
	{
		printf("\nThe Stack is empty!");
	}
}

int main()
{
	top=-1;
	printf("Enter the size of stack: ");
	scanf("%d",&n);
	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n");
	do
	{
		printf("\nEnter the above choice: ");
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
					display();
					break;
				}
			default:
				printf("Please enter the given choice(1/2/3)!");
		}
		
	}while(ch<=3);
	return 0;
}
		