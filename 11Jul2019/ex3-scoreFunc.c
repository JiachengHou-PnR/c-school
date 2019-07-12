#include <stdio.h>

void initScore(int[], int);
int findMax(int[], int);
int findMin(int[], int);
float getAvg(int[], int);

void initScore(int s[], int length)
{
	printf("Please enter %d scores seperated by ENTER\n", length);
	for (int i = 0; i < length; i++)
	{
		scanf(" %d", &s[i]);
	}
}

int findMax(int s[], int length)
{
	int max = s[0];

	for (int i = 1; i < length; i++)
	{
		if (s[i] > max)
		{
			max = s[i];
		}
	}
	return max;
}

int findMin(int s[], int length)
{
	int min = s[0];

	for (int i = 1; i < length; i++)
	{
		if (s[i] < min)
		{
			min = s[i];
		}
	}
	return min;
}

float getAvg(int s[], int length)
{
	printf("%d", length);
	float sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += s[i];
	}

	return (sum / length);
}

int main()
{
	int score[5];
	int max;
	int min;
	float avg;
	int length = sizeof(score) / sizeof(int);

	initScore(score, length);

	max = findMax(score, length);
	min = findMin(score, length);
	avg = getAvg(score, length);

	printf("max = %d, min = %d, avg = %.3f\n", max, min, avg);

	return 0;
}
