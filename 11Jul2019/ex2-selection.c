#include <stdio.h>

int main()
{
	int arr[5] = {11, 22, 33, 44, 55};
	int length = sizeof(arr) / sizeof(int);

	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (arr[i] < arr[j])
			{
				 int temp = arr[i];
				 arr[i] = arr[j];
				 arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}
