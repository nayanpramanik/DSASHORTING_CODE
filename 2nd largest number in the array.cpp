#include<stdio.h>
int main()
{
	int arr[100],i,n,j=0,lg,lg2;
	
	printf("Enter the array size: ");
	scanf("%d",&n);
	
	printf("Input the array elements:\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	lg=0;
	
	for(i=0; i<n; i++)
	{
		if(lg<arr[i])
		{
			lg=arr[i];
			j=i;
		}
	}
	
	lg2=0; 
	
	for(i=0; i<n; i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(lg2<arr[i])
			{
				lg2=arr[i];
			}
		}
	}
	
	printf("\nThe largest number in the array is: %d",lg2);
	
	return 0;
}