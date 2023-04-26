/* Memory allocation can be done using the following functions:
	1. malloc
	2. calloc
	3. realloc
	4. free
	The above functions are available in the stdlib.h  library.

	malloc(size_of_data_type_in_bytes) is a like a pointer. To access this memory: 
	int *ptr = (int*) malloc(4); -> for integer memory allocation
	*ptr = <some_integer_value>;
	printf("%d %d", *ptr, ptr);
	
	malloc() allocates memory one memory location at a time whereas calloc() allocates the entered amount of memory at once. 
	However, malloc() keeps the allocated memory uninitialized whereas calloc() initializes the memory with zero value.
	Hence, malloc() is faster.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	// malloc()
	
	printf("dynamic memory allocation using malloc():\n\n");
	
	char *ptr = (char*) malloc(2);
	
	*ptr = 'a';
	printf("%c %d\n", *ptr, ptr);
	
	ptr++;
	
	*ptr = 'b';
	printf("%c %d\n\n\n\n", *ptr, ptr);
	
	
	
	// calloc()
	
	printf("dynamic memory allocation using calloc():\n\n");
	
	int i, n;
	
	int *ptr2 = (int*) calloc(3, 4);
	
	for(i = 0; i < 3; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &ptr2[i]);
	}
	
	printf("\nEntered array of numbers:\n");
	
	for(i = 0; i < 3; i++)
	{
		printf("%d %d\n", ptr2[i], &ptr2[i]);
	}
	
	return 0;
}

