// program to implement a queue using arrays

#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();

int main()
{
	int choice;
	char c;
	
	printf("Queue Operations: \n");
	printf("1. enqueue\n2. dequeue\n3. display\n");
	
	do
	{	
		printf("\nEnter 1, 2 or 3 to perform a queue operation from the list above, or 4 to exit: ");
		scanf("%d", &choice);
	
		switch(choice)
		{
			case 1:
				{
					printf("\nEntered choice: %d\n", choice);
					enqueue();
					break;
				}
			case 2:
				{
					printf("\nEntered choice: %d\n", choice);
					dequeue();
					break;
				}
			case 3:
				{
					printf("\nEntered choice: %d\n", choice);
					display();
					break;				
				}
			case 4:
				{
					printf("\nTerminating...");
					break;
				}
			default:
				{
					printf("\nInvalid choice. Terminating...");
					break;
				}		
		}
		
	}while(choice == 1 || choice == 2 || choice == 3);
	
	return 0;
}

void enqueue()
{
	int n;
	
	printf("Enter a value to be entered in the queue: ");
	scanf("%d", &n);
	
	if(rear == (MAX - 1))
	{
		printf("queue full, cannot enter element.\n\n\n");
	}
	else
	{
		front == -1 ? front++ : 0;
		rear++;
		queue[rear] = n;
		printf("Value entered.\n\n\n");
	}
	
	return;	
}

void dequeue()
{
	int i;
	
	if(front < 0)
	{
		printf("queue empty, cannot delete element.\n\n\n");
	}
	else if(front >= 0 && front != rear)
	{
		// entering 0 to denote a deleted element (temporary - fix this)
		queue[front] = 0;
		front++;
		printf("Value deleted.\n\n");
	}
	else if(front == rear)
	{
		front = -1;
		rear = -1;
		printf("Value deleted.\nQueue empty. Reset front and rear indices to -1.\n\n\n");
	}
	
	return;
}

void display()
{
	int i;
	
	printf("Available queue: \n");
	
	for(i = front; i <= rear; i++)
	{
		printf("%d\t", queue[i]);
	}
	
	printf("\n\n\n");
	
	return;
}












