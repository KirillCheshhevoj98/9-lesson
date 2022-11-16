#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>
					
int main()
{	
	/*
		—ортировка массива
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
	int startRange = 0, endRange = 1000;
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
		1 2 5 7 9 13    	arr[i] < arr[i + 1] по возрастанию
		2 4 4 8 9 13    	arr[i] <= arr[i + 1] по неубыванию
		10 8 7 4 -2			arr[i] > arr[i + 1] по убыванию
		10 9 1 -5 -5 -10	arr[i] >= arr[i + 1] по невозрастанию
	
	ѕузырькова€ сортировка
			
		for(int j = 0; j < size - 1; j++)
		{
			for(int i = 0; i < size - 1 - j; i++)
			{
				if(arr[i] > arr[i + 1])
				{
					tmp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = tmp;
				}
			}
		}
	*/
	
	// —ортировка по возрастанию
	int tmp;
	// внешний цикл запускает внутренний цикл size - 1 раз
	for(int j = 0; j < size - 1; j++)
	{
		// внутренний цикл провер€ет пары элементов - текущий и следующий
		for(int i = 0; i < size - 1 - j; i++) // двигаемс€ до предпоследнего элемента, так как дл€ последнего элемента нет пары
		// -j дл€ проверки меньшего количества пар с каждым новым запуском внутреннего цикла
		{
			if(arr[i] > arr[i + 1]) // если элементы расположенны неверно
			{
				tmp = arr[i];
				arr[i] = arr[i + 1]; // то мен€ем их местами
				arr[i + 1] = tmp;
			}
		}
	}

	printf("Sorted array:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d element = %d\n", i + 1, arr[i]);
	}
	
	
	// —ортировка по убыванию
	for(int j = 0; j < size - 1; j++)
	{
		for(int i = 0; i < size - 1 - j; i++) 
		{
			if(arr[i] < arr[i + 1]) 
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	
	printf("Sorted array:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d element = %d\n", i + 1, arr[i]);
	}
	getchar();
	return 0;
}
