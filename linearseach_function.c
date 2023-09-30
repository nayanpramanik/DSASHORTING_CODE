#include<stdio.h>
#include<stdlib.h>

int linearsearch(int arr[],int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
     return -1;
}

int main()
{
    int arr[100],i,x,n;
    printf("Enter the Number of elements which you want to insert: ");
    scanf("%d",&n);
    
    for(i=0;i<n; i++)
    {
        printf("Enter the data: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which you want to search: ");
    scanf("%d",&x);

    int result=linearsearch(arr,n,x);

    if(result==-1)
    {
        printf("Elements not found!");
    }
    else{
        printf("Elements found at index: %d",result);
    }
    return 0;
}