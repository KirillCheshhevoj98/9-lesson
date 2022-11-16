#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>
					
int main()
{
	/*
		Расчет среднего арифмитического 2 двух заданных элементов
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
	
	printf("Changed array:\n");
	for(int i = 0; i < size; i++)
	{
		arr[i] *= 2;
		printf("%d element = %d\n", i + 1, arr[i]);
	}
	/*
	 	arr[0] = arr[0] * 2
		arr[1] = arr[1] * 2
	 	...
	*/
	getchar();
	return 0;
}
