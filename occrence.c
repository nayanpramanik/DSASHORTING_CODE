#include<stdio.h>
int firstoccurance(int arr[],int n,int key)
{
    int ans;
    int start=0;
    int end=n-1;
    int mid=(end+start)/2;
    while(start<=end)
    {
    if(arr[mid]==key)
    {
        //return mid;
        ans=mid;
        end=mid-1;
    }
    else if(key<arr[mid])
    {
        end=mid-1;
    }
    else if(key>arr[mid])
    {
        start=mid+1;
    }
    mid=(start+end)/2;
    }
    //return ans;
}
int main()
{
    int even[6]={1,2,3,4,5,6};
    //int key;
    //printf("Enter the value to search:");
   // scanf("%d",&key);
    printf("first occurance is:%d",firstoccurance(even,6,4));
    return 0;
}