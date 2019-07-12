#include <stdio.h>

int add(int, int);
int min(int, int);
int mul(int, int);
float div(int, int);

int add(int a, int b)
{
	return a + b;
}

int min(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

float div(int a, int b)
{
	if (b == 0)
		printf("Dinominator cannot be 0.\n");
	else
		return ((float) a / b);
	
	return 0;
}


int main()
{
	int a;
	int b;
	char s;

	printf("Please enter two numbers\n");
	scanf(" %d %d", &a, &b);

	printf("Please enter a calculation sign.\n");
	scanf(" %c", &s);

	printf("The result is: ");

	switch (s)
	{
		case '+' :
			printf("%d\n", add(a, b));
			break;
		case '-' :
			printf("%d\n", min(a, b));
			break;
		case '*' :
			printf("%d\n", mul(a, b));
			break;
		case '/' :
			printf("%f\n", div(a, b));
			break;
		default  :
			printf("Invalid calculation sign.\n");
			break;
	}


	return 0;
}
