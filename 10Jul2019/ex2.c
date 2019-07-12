#include <stdio.h>

int main()
{
	
	char calc;
	int x;
	int y;
	double z = 0.0;
	
	while(calc != 'E')
       	{
		printf("Please enter the desired calculation sign (+ - * /)\n");
		printf("Enter E to exit.\n");
		scanf(" %c", &calc);
	
		if(calc == 'E') break;

		printf("Please enter two numbers to be calculated.\n");
		scanf("%d %d", &x, &y);

		switch(calc){

			case '+' : 
				z = (double)x + (double)y;
				break;
			case '-' : 
				z = (double)x - (double)y;
				break;
			case '*' :
				z = (double)x * (double)y;
				break;
			case '/' :
				if(y != 0){
					z = (double)x / (double)y;
					break;
				}
			default :
				printf("The data you entered is incorrect.\n");
				break;
		}

		printf("%d %c %d = %.3f\n", x, calc, y, z);
	
	} 
	
	return 0;
}
