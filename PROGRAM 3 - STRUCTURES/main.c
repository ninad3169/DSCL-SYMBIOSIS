// A. creating a database of vehicles by storing information like:
// 1. name
// 2. manufacturing year
// 3. cost
// 4. category (high end (H) / middle (M) / low end (L))
// make a structure to store the above information about a vehicle.



#include <stdio.h>

// creating a structure and naming it 'car'
struct car
{
	char name[50];
	int mYear;
	int cost;
	char category;
};

struct car model[3];

int main()
{
	// int i, j;
	
	// declaring an array of the struct data type 'car' and calling it 'model'
	
	// taking user input for the name, manufacturing year, cost and category
	//printf("Name: ");
	//scanf("%s", &model.name);
	
	//printf("Manufacturing Year: ");
	//scanf("%d", &model.mYear);
	
	//printf("Cost: ");
	//scanf("%d", &model.cost);
	
	//printf("%s %d %d", model.name, model.mYear, model.cost);
	
	
	/*
	// storing details of 10 (3 for now) cars in an array
	for(i = 0; i < 3; i++)
	{
		printf("Name: ");
		scanf("%s", &model[i].name);
	
		printf("Manufacturing Year: ");
		scanf("%d", &model[i].mYear);
		
		printf("Cost: ");
		scanf("%d", &model[i].cost);		
		
		printf("\n\n\n");
	}
	
	
	printf("Available Database: \n\n");
	printf("Name  MYear  Cost \n");
	
	for(j = 0; j < 3; j++)
	{
		printf("%s  %d  %d \n", model[j].name, model[j].mYear, model[j].cost);
	}
	*/
	
	userInput();
	printInput();
	
	return 0;
}



// B. make two functions: one takes user input, the other prints it

void userInput()
{
	int i;
	
	// storing details of 10 (3 for now) cars in an array
	for(i = 0; i < 3; i++)
	{
		printf("Name: ");
		scanf("%s", &model[i].name);
	
		printf("Manufacturing Year: ");
		scanf("%d", &model[i].mYear);
		
		printf("Cost: ");
		scanf("%d", &model[i].cost);		
		
		printf("\n\n\n");
	}
		
}

void printInput()
{
	int j;
	
	printf("Available Database: \n\n");
	printf("Name  MYear  Cost \n");
	
	for(j = 0; j < 3; j++)
	{
		printf("%s  %d  %d \n", model[j].name, model[j].mYear, model[j].cost);
	}
	
}
