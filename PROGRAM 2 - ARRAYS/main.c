#include <stdio.h>

int main()
{
	int i, j;
	int x[5] = {2, 10, 15, 17, 21};
	
	
	// 3. storing and printing a string, which is essentially a character array, and then printing array elements at even indexes:
	
	char name[] = "SYMBIOSIS";
	printf("Value stored in the string (character array): %s \n\n", name);
	
	printf("String characters at even indexes: \n");
	
	for(j = 0; j < sizeof(name); j++)
	{
		if(j % 2 == 0)
		{
			printf("%c", name[j]);
		}
		else
		{
			printf("\n");
		}
	}
	
	
	
	
	
	// 2. taking an array index as input from the user and printing the element at that index in that array:
	
	//int user_index;
	
	//printf("Enter an array index: ");
	//scanf("%d", &user_index);
	
	//if((user_index < 0) || (user_index >= 4))
	//{
	//	  printf("invalid index \n\n");
	//}
	//else
	//{
	//    printf("Element at array index %d: %d \n\n", user_index, x[user_index]);
	//}
	
	
	
	
	// 1. printing the first array element along with the rest of the array using a for loop:
	
	//printf("First array element: %d \n\n", x[0]);
	
	//for(i = 0; i < 5; i++)
	//{
	//    printf("Array element %d: %d", i, x[i]);
	//	  printf("\n");
	//}
	
	
	return 0;
}
