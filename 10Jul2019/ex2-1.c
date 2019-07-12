#include <stdio.h>
#include <stdbool.h>

int main()
{
	
	char calc;
	int x;
	int y;
	double z = 0.0;
	bool error = false;
	
	while(calc != 'E')
       	{
		printf("Please enter the desired calculation sign (+ - * /)\n");
		printf("Enter E to exit.\n");
		scanf(" %c", &calc);
	
		if(calc == 'E') break;

		printf("Please enter two numbers to be calculated.\n");
		scanf("%d %d", &x, &y);

		if(calc == '+')
			z = x + y;
		else if(calc == '-')
			z = x - y;
		else if(calc == '*')
			z = x * y;
		else if(calc == '/'){
			if(y != 0)
				z = (double)x / (double)y;
			else{
				printf("y cannot be 0\n");
				error = true;	
			}
		}
		else{
			printf("Please enter a correct sign\n");
			error = true;
		}

		if(!error)
			printf("%d %c %d = %.3f\n", x, calc, y, z);
	
	} 
	
	return 0;
}
