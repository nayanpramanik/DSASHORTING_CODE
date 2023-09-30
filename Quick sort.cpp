#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[], int lb, int ub)
{
	//here, i select the leftmost as pivot
	int pivot=arr[lb];
	
	int	start=lb;
	int	end=ub;
	
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&arr[start],&arr[end]);
		}
	}
	swap(&arr[lb],&arr[end]);
	return end;
}

int quicksort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=partition(arr,lb,ub);
		
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);
	}
}

void printarray(int arr[],int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d ",arr[i]);	
	}
	printf("\n");
}

int main()
{
	int arr[]={8,7,2,1,0,9,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted ways: \n");
	printarray(arr,n);
	
	quicksort(arr,0,n-1);
	
	printf("sorted elements:\n");
	printarray(arr,n);
	
	return 0;
}
	
	