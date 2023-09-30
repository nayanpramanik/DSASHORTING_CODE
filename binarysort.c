#include<stdio.h>
int binarrysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(end+start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(end+start)/2;
    }
    return -1;


}

int main()
{
    int key1,key2;
    int even[6];
    int odd[5];
    printf("Enter the even array:\n");
    for(int i=0;i<6;i++)
    {
    scanf("%d",&even[i]);
    }
    printf("Enter the odd array:\n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&odd[i]);
    }
    printf("Enter the key1 for even:\n");
    scanf("%d",&key1);
    printf("Enter the key2 for odd:\n");
    scanf("%d",&key2);
  
    int evenindex=binarrysearch(even,6,key1);
    int oddindex=binarrysearch(odd,5,key2);

    printf("search for %d in even: %d",key1,evenindex);
    printf("search for %d in odd: %d",key2, oddindex);

    return 0;
}

