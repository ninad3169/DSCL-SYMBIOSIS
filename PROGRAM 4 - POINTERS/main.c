#include <stdio.h>

int main()
{
	
	// a. creating a variable, then creating a pointer to point to the memory address of the variable, printing both variable values:
	
	int x;
	
	int arr[5] = {4, 2, 9, 3, 0};
	
	// pointer variable p
	// the data type of a variable and the data type of the pointer variable must be the same. 
	// the pointer variable without the * ALWAYS stores an integer value (regardless of what the data type of *p is).
	int *p;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	// using & before a variable gives the memory address of that variable
	p = &x;
	
	printf("\n");
	printf("Value stored in x: %d \n", x);
	printf("Value that *p points towards: %d \n", *p);
	printf("Memory address of x, &x: %d \n", &x);
	printf("Memory address stored in p: %d \n", p);
	printf("Memory address of p, &p : %d \n\n\n", &p);
	
	
	// pointers with arrays:
	
	int *q = arr;
	
	printf("*q pointing towards: %d \n", *q);
	q++;
	printf("after incrementing, *q pointing towards: %d \n", *q);
	
	return 0;
	
}

