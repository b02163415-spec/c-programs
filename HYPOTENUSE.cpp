#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,hypotenuse;
	
	printf("enter two sides of a right triangle: ");
	scanf("%f %f", &a , &b);
	
	hypotenuse = sqrt((a*a)+(b*b));
	
	printf("hypotenuse = %.2f\n", hypotenuse);
	return 0;
}