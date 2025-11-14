#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	char p[50];
	printf("enter a number:");
	scanf("%d",&a);
	printf("\nenter the float value:");
	scanf("%f",&b);
	printf("\nenter a character:");
	scanf("%s",&c);
	printf("\nenter your name:");
	scanf("n%s",&p);
	//output will execute feom here
	printf("\n%f",a);
	printf("\n%d",b);
	printf("\n%c",c);
	printf("\n%s",p);
	return 0;
}