#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int count = 0;
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
		{
			printf("%d  ", year);
			count++;
		}
	}
	printf("\ncount=%d \n",count);
	return 0;
}