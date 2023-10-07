#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	char c;
	int result;
	
	printf("enter the caculation:");
	
	scanf("%d %c %d",&a,&c,&b);
	
	if (c == '+')
	{
		result = a + b ;
	}
	
	else if (c == '-')
	{
		result = a - b ;
	}
	else if (c == '/')
	{
		result = a / b ;
	}
	else if (c == '*')
	{
		result = a * b ;
	}
	else
	 {
	 printf("error");
	 }
	
	printf("result is %i\n",result);
	
	return 0;
}