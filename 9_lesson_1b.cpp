#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>
					
int main()
{
	/*
		?????? ???????? ??????????????? 2 ???? ???????? ?????????
	*/
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE]; 
	int size;
	
	printf("Enter size array[1...%d]: ", MAX_SIZE);
	scanf("%d", &size);
	
	while(size < 1 || size > 100)
	{
		printf("Incorrect input\n");	
		printf("Enter size array[1...%d]: ", MAX_SIZE);
		fflush(stdin);
		scanf("%d", &size);
	}
	
	srand(time(0));
	int startRange = -50, endRange = 50;
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % (endRange - startRange + 1) + startRange;	
	}
	
	printf("Original array:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d element = %d\n", i + 1, arr[i]);
	}
	
	int num1, num2;
	
	printf("Enter number ?1 element: ");
	scanf("%d", &num1);
		
	while(num1 < 1 || num1 > size)
	{
		printf("Incorrect input\n");
		fflush(stdin);
		scanf("%d", &num1);
	}
	
	printf("Enter number ?2 element: ");
	scanf("%d", &num2);
	
	while(num2 < 1 || num2 > size || num1 == num2)
	{
		printf("Incorrect input\n");
		fflush(stdin);
		scanf("%d", &num2);
	}
	
	double average_value = (double)(arr[num1 - 1] + arr[num2 - 1]) / 2;
	printf("Average value = %.1lf", average_value);
	getchar();
	return 0;
}
