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
			printf("Distance cannot be or below 0.\n");
		}

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

		printf("The total price is: %d, and your discount is %.0f%\n", totalPrice, discount * 100);

		printf("To continue, press any key. To exit, press E\n");
		scanf(" %c", &c);	
	}
	while (c != 'E');
	
	return 0;
}
