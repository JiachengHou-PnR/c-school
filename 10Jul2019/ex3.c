#include <stdio.h>

int main()
{
	int totalPrice;
	int distance;
	int unitPrice;
	int weight;
	float discount;
	
	char c = 'A'; 

	do{
		printf("Please enter unit price, distance, and weight seperated by SPACE\n");
		scanf(" %d %d %d", &unitPrice, &distance, &weight);

		if (distance <= 0){
			discount = 0;
			distance = 0;
			printf("distance cannot be or be or below 0");
		}
		else if  (distance < 250)
			discount = 0;
		else if (distance < 500)
			discount = 0.02;
		else if (distance < 1000)
			discount = 0.05;
		else if (distance < 2000)
			discount = 0.08;
		else if (distance < 3000)
			discount = 0.10;
		else // discount >= 3000
			discount = 0.15;

		totalPrice = distance * unitPrice * weight * (1 - discount);

		printf("The total price is: %d, and your discount is %.0f%\n", totalPrice, discount * 100);

		printf("To continue, press any key. To exit, press E\n");
		scanf(" %c", &c);	
	}
	while (c != 'E');
	
	return 0;
}
