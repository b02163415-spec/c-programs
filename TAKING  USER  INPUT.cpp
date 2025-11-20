#include<stdio.h>
#include<string.h>
int main()
{
	char name[10] , full_name[20] , address[30];
	
	printf("entre your name: ");
	scanf("%s" , name);
	printf("my name is: %s" , name);
	
	getchar();
	
	printf("enter your full name: ");
	scanf(" %[^\n]" , full_name);
    printf("\n%s" , full_name);
    
    printf("enter your address: ");
    scanf("%s" , address);
    printf("my address is:%s", address);
    
    return 0; 
}