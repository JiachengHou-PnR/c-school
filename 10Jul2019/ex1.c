#include <stdio.h>

int main()
{
	int x;
	int y;

	do{
		printf("Enter value for x.\n");
		scanf("%d", &x);

		if (x < 0)
			y = 2 * x + 1;
		else if (x >= 10)
			y = x;
		else
			y = x + 10;

		printf("The y value for x = %d is %d.\n", x, y);
		
	} while (1);



	return 0;
}
