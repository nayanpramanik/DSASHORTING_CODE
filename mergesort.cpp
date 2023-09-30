#include<stdio.h>
#include<stdlib.h>

void mergesort(int arr[], int lb, int ub)
{
	if(lb<ub)
	{
	int mid = (lb+ub)/2;
	mergesort(arr,lb,mid);
	mergesort(arr,mid+1,ub);
	merge(arr,lb,mid,ub);
	}
}

void merge(int arr[], int lb, int mid, int ub)
{
	int i=lb;
	int j=mid+1;
	int brr[];
	int k;
	
	if(lb<ub)
	{
		while(i<=mid && j<=ub)
		{
			if(arr[i]<arr[j])
			{
				brr[k]=arr[i];
				i++;
			}
			else
			{
				brr[k]=arr[j];
				j++;
			}
			k++;
		}
		if(i>mid)
		{
			while(j<=ub)
			{
				brr[k]=arr[j];
				j++;
				k++;
			}
		}
		else
		{
			while(i<=mid)
			{
				brr[k]=arr[i];
				i++;
				k++;
			}
		}
	}
}

void printarray(int arr[], int n)
{
	for(k=lb; k<=ub; k++)
	{
		arr[k]=brr[k];		
	}	
	
	for(k=0; k<n; k++)
	{
		printf("%d",arr[k]);
	}
	printf("\n");
}

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
 	int arr[]={2,3,9,0,1,5,6,8,10,4};
	int n= sizeof (arr)/sizeof(arr[0]);	
	print(arr,n);
	mergesort(arr,0,n-1);
	printarry(arr,n);
	return 0;
	 
}

