#include<stdio.h>
int main()
{
int r,c,n;
printf("enter size of triangle n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
		printf("*");
	printf("\n");
}
return 0;
}

