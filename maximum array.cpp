#include<stdio.h>
int main()
{
	int i , n , max , a[10];
	printf("enter n value: ");
	scanf("%d", &n); 
	
	printf("enter %d element:\n", n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 1 ; i < n ; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("maximun value = %d\n" , max);
	return 0;
}