#include<stdio.h>
static int mv=1;
void TOH(int N, char S, char A, char D)
{
	if(N==1)
	{
		printf("\n%d",mv);
		mv++;
		printf("move from tower %c to tower %c",S,D);
	}
	else
	{
		TOH(N-1,S,D,A);
		printf("\n%d",mv);
		mv++;
		printf("move from %c to tower %c",S,D);
		TOH(N-1,S,D,A);
	}
}

int main()
{
	int n;
	printf("Enter the number of disks =");
	scanf("%d",&n);
	TOH(n,'S','D','A');
	return 0;
}