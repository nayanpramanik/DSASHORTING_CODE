#include <stdio.h>
#include<stdlib.h>

void selection(int *A, int n)
{
    int i, j, index_min;

    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (j = i+1; j<n; j++)
        {
            if (A[j] < A[index_min])
            {
                index_min = j;
            }
        }
        int temp = A[i];
        A[i] = A[index_min];
        A[index_min] = temp;
    }
}

void printarray(int *A, int n)
{
    for (int i=0; i<n-1; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {3, 1, 0, 5, 2};
    int n = 5;
    printarray(A, n);
    selection(A, n);
    printarray(A, n);

    return 0;
}