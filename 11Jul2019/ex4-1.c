#include <stdio.h>

float calc(char, int, int);

float calc(char sign, int a, int b)
{
	switch (sign)
	{
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		if (b == 0)
		{
			printf("Denominator cannot be zero.\n");
		}
		else
		{
			return a / b;
		}
		break;	
	default:
		printf("Invalid calculation sign.\n");
		break;
	}
	return 0;
}

int main()
{
	int a;
	int b;
	char s;
	float r;

	printf("Please enter two numbers\n");
	scanf(" %d %d", &a, &b);

	printf("Please enter a calculation sign.\n");
	scanf(" %c", &s);

	r = calc(s, a, b);
	printf("The result is: %.2f\n", r);

	return 0;
}
