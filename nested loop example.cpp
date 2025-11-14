#include<stdio.h>
int main()
{
	int i,j, n=4;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
		{
			printf("j=2*i-1");
	    }
		printf("n-i") ; 
	}
	return 0;
}