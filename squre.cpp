#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter size of squre\n");
	scanf("%d",&n);
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
			printf("*");
		printf("\n");
	}
	return 0;
}
