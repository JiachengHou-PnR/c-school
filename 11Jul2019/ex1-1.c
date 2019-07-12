#include <stdio.h>

int main()
{
	int a[9] = {1,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);

	for (int i = 0; i < length; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (a[j] > a[j - 1]){
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				}
		}
	}
	for (int i = 0; i < length; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
}

