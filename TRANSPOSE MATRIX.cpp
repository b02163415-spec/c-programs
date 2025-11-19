#include<stdio.h>
int main()
{
	int i , j , a[3][3] , t[3][3];
	printf("enter array elements:\n");
	for(i = 0 ; i < 3; i++)
	{
		for(j= 0; j < 3 ; j++)
		{
			scanf("%d ", &a[i][j]);
    	} 
	}
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			t[i][j] = a[i][j];
		}
	}
	printf("transpose of matrix is: \n");
	for(i = 0 ; i <3 ; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
	return 0;
}