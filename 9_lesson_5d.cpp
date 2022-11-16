#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>
					
int main()
{
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
	int startRange = 0, endRange = 10;
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % (endRange - startRange + 1) + startRange;	
	}
	
	printf("Original array:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d element = %d\n", i + 1, arr[i]);
	}
	
	/*
		int num = 4;
		for(int i = num; i < size - 1; i++)
		{
			arr[i] = arr[i + 1]
		}
	*/
	
	int num = 0;
	printf("Enter number element for delete: ");
	scanf("%d", &num);
	
	while(num < 1 || num > size)
	{
		printf("Incorect input.\n");
		fflush(stdin);
		scanf("%d", &num);
	}
	
	// удаление - это последовательное смещение элементов
	for(int i = num; i < size - 1; i++) // начинаем с индекса элемента, который нужно удалить
	{
		arr[i] = arr[i + 1]; // на место текущего записываем значения следующего
	}
	
	printf("Canged array:\n");
	for(int i = 0; i < size - 1; i++) // уменьшаем количество элементов на 1, так как мы удалили 1 элемент
	{
		printf("%d element = %d\n", i + 1, arr[i]);
	}
	getchar();
	return 0;
}
