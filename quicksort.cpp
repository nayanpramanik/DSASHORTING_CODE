#include<stdio.h>
#include<stdlib.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int partition(int arr[], int lb, int ub)
{
	int pivot= arr[lb];
	int start= lb;
	int end= ub;
	while(start<end)
	{
		while(pivot>=arr[start])
		{
			start++;
		}
		while(pivot<arr[end])
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


void quicksort(int arr[], int lb, int ub)
{
	if(lb<ub)
	{
		int loc = partition(arr,lb,ub);
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);
	}
}

void printarry(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[]={0,2,9,6,3,1,8,10,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("The Unsorted Array: ");
	printarry(arr,n);
	
	quicksort(arr,0,n-1);
	printf("The sorted Array are: ");
	printarry(arr,n);
	return 0;
}



