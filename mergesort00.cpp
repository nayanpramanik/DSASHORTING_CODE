#include<stdio.h>
#include<stdlib.h>



void merge(int arr[], int lb, int mid, int ub)
{
	int i=lb;
	int j=mid+1;
	int brr[100];
	int k=lb;
	
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
	for(int k=lb; k<=ub; k++)
	{
		arr[k]=brr[k];		
	}	
}

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
	
	mergesort(arr,0,n-1);
	print(arr,n);
	return 0;
	 
}

