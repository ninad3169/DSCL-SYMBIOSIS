// implementing linear search

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10] = {39, 7, 40, 40, 40, 345, 76, 22, 39, 319};
	//int arr[10] = {rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand()};

	int n;
	int count = 0;
	
	// array to store the indices at which the entered element is found (if it is found)
	int index[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	
	int i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("\n");
	
	for(i = 0; i < 10; i++)
	{
		if(arr[i] == n)
		{
			index[i] = i;
			count++;
		}
	}
	
	if(count >= 1)
	{
		printf("Element found at index / indices: ");
		
		for(i = 0; i < 10; i++)
		{
			if(index[i] != -1)
			{
				printf("%d ", index[i]);
			}
		}
		printf("\n");
	}
	else
	{
		printf("Element not found.\n");
	}
	
	
	
	/*
	if(count >= 1)
	{
		printf("Element found at index: %d\n", index);
		//printf("Element found at %d indices.\n\n", count);
	}
	else
	{
		printf("Element not found.");
	}
	*/
	
	/*
	// finding the indices at which the element is found
	int *indices = (int*)calloc(count, sizeof(int));
	
	for(i = 0; i < 10; i++)
	{
		if(arr[i] == n)
		{
			indices[i] = i;
		}
	}
	
	printf("Indices at which the entered element was found: ");
	
	for(i = 0; i < 10; i++)
	{
		if(indices[i] >= 0 && indices[i] <= 9)
		{
			printf("%d ", indices[i]);			
		}
	}
	*/
	
	return 0;
	
}
