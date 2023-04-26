/* Using bitwise operators write programs:
	1. to perform AND operation of two numbers
	2. to perform OR operation of two numbers
	3. to perform XOR operation of two numbers
	4. to count number of 1s in an integer number
	5. to check if a number is even or odd
	6. to check if a number is a power of two or not
	7. to print a number in binary
*/


#include <stdio.h>

int main()
{
	int n1, n2, x, y, z, choice;
	int count = 0;
	int copy;
	
	printf("Bitwise Operations:\n\n1 - AND, OR, XOR of two numbers\n2 - Count the number of 1s in an integer\n3 - Check if a number is even or odd\n4 - Check if a number is a power of two or not\n5 - Print a number in binary\n\n");
	printf("Enter a number from the list above: ");
	scanf("%d", &choice);
	
	printf("\n\n\n");
	
	switch(choice)
	{
		case 1:
		{
			// AND, OR, XOR of two numbers
			
			printf("Entered choice: 1\n\n");
			
			printf("Enter the first number: ");
			scanf("%d", &n1);
			printf("Enter the second number: ");
			scanf("%d", &n2);
	
			printf("\n");
	
			printf("AND of two numbers: %d\n", n1 & n2);
			printf("OR of two numbers: %d\n", n1 | n2);
			printf("XOR of two numbers: %d\n", n1 ^ n2);
			
			break;	
		}
		case 2:
		{
			// count the number of 1s in an integer
			
			printf("Entered choice: 2\n\n");
			
			printf("Enter a number: ");
			scanf("%d", &x);
			
			copy = x;
			
			do
			{
				if(copy & 1)
				{
					count++;
				}
				
				copy = copy >> 1;
				
			}while(copy != 0);
			
			printf("Number of 1s in the entered integer's binary form: %d\n", count);
			
			break;
		}
		case 3:
		{
			// check if a number is even or odd
			
			printf("Entered choice: 3\n\n");
			
			printf("Enter a number: ");
			scanf("%d", &x);
			
			(x & 1 != 0) ? 
				printf("Odd number.\n") :
				printf("Even number.\n");

			break;
		}
		case 4:
		{
			// check if a number is a power of two or not
			
			printf("Entered choice: 4\n\n");
			
			printf("Enter a number: ");
			scanf("%d", &y);
			
			copy = y;
			
			do
			{
				if(copy & 1)
				{
					count++;
				}
				
				copy = copy >> 1;
				
			}while(copy != 0);
			
			
			(count == 1) ? 
				printf("The entered number is a power of 2.\n") :
				printf("The entered number is not a power of 2.\n");
					
			break;
		}
		case 5:
		{
			// print a number in binary
			// check
			
			printf("Entered choice: 5\n\n");
			
			printf("Enter a number: ");
			scanf("%d", &z);
			
			printf("Binary: %d\n", z | 0);
			
			
			break;
		}
		default:
		{
			printf("Invalid choice. Terminating...\n\n");
			
			break;
		}
	}
	
	return 0;
		
}
