#include <stdio.h>

int main()
{
	int a[9] = {1,2,3,4,5,6,7,8,9};
	int len	 = sizeof(a) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
