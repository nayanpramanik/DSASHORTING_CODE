#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
	int temp= *x;
	*x= *y;
	*y=temp;
}

void selectionsort(int arr[],int n)
{
	int i,j,min_indx;
	
	for(i=0;i<n-1;i++)
	{	
		min_indx=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_indx])
			{
				min_indx=j;
		    }
		}
        swap(&arr[min_indx],&arr[i]);
	}
}


void printarray(int arr[],int size)
{
	int i;
	for(i=0; i<size-1; i++)
	{
	printf("%d ", arr[i]);	
	}
	printf("\n");
}

int main()
{
	int a,arr[100],size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
	for(a=0;a<size;a++)
	{
		printf("Enter the elements: ");
		scanf("%d",&arr[a]);
	}
		int n= sizeof(arr)/sizeof(arr[0]);
		selectionsort(arr,n);
		printf("The sorted elements are : ");
		printarray(arr,n);

		return 0;
}