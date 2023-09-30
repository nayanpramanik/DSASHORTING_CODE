#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int size;
	int top;
	int *arr;
}st;
stack *ptr;

int full()
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int empty()
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	stack *s;

	s->size=20;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    s->arr[0]=2;
    s->top++;
       
    if(s->top==-1)
    {
    printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
    printf("\nThe elements is that:%d ",s->arr[0]);
    
	
	return 0;
}