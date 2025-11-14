#include<stdio.h>
int main()
{
	int  i , n , min , a[10];
	printf("enter n value: ");
	scanf("%d" , &n);
	printf("enter elements of arrays");
	for(i = 0; i < n ; i++);
	{
		printf("%d", &a[i]);
	}
	
	min = a[0];
	for(i = 1; i <n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("\nmaximum element is: %d", min);
	return 0;
}