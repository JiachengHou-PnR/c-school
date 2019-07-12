#include <stdio.h>
int getTotalPrice(int, int, int);

int getTotalPrice(int unitPrice, int distance, int weight)
{
	int totalPrice;
	float discount;

	switch (distance / 250)
		{
			case 0 : 
				discount = 0;
				break;
			case 1 : 
				discount = 0.02;
				break;
			default:
				switch (distance / 1000)
				{
					case 0 : 
						discount = 0.05;
						break;
					case 1 :
						discount = 0.08;
						break;
					case 2 :
						discount = 0.10;
						break;
					default:
						discount = 0.15;
						break;
				}
				break;
		}	

		totalPrice = distance * unitPrice * weight * (1 - discount);

	return totalPrice;
}

int main()
{
	int totalPrice;
	int distance;
	int unitPrice;
	int weight;
	
	char c = 'A'; 

	do{
		printf("Please enter unit price, distance, and weight seperated by SPACE\n");
		scanf(" %d %d %d", &unitPrice, &distance, &weight);

		if (distance <= 0){
			distance = 0;
			printf("Distance cannot be or below 0.\n");
		}

		totalPrice = getTotalPrice(unitPrice, distance, weight);

		printf("The total price is: %d\n", totalPrice);

		printf("To continue, press any key. To exit, press E\n");
		scanf(" %c", &c);	
	}
	while (c != 'E');
	
	return 0;
}
