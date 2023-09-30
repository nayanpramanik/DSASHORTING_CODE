#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100],i,n,j;
    int data;
    int found=0;
    printf("Enter the number of elements which you want to insert: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the data: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the Number which you want to search: ");
    scanf("%d",&data);

    for(i=0;i<n; i++)
    {
        if(arr[i]==data)
        {
            printf("Elements %d found at index: %d",arr[i],i);
            break;
        }
    }
    if(i==n)
    {
        printf("Elements are not found!");
    }
    return 0;
}