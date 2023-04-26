// Implementing Linked Lists using structures

// printf statement once, stop looping when the pointer finds address NULL

#include <stdio.h>
#include <stdlib.h>

void disp();

struct node
{
	int data;
	struct node *next;
};

struct node *start;

int main()
{
	struct node *newnode1, *newnode2, *newnode3, *newnode4;
	
	newnode1 = (struct node*) malloc(sizeof(struct node));
	newnode2 = (struct node*) malloc(sizeof(struct node));
	newnode3 = (struct node*) malloc(sizeof(struct node));
	newnode4 = (struct node*) malloc(sizeof(struct node));
	
	newnode1 -> data = 10;
	newnode1 -> next = newnode2;
	
	start = newnode1;
	
	newnode2 -> data = 20;
	newnode2 -> next = newnode3;
	
	newnode3 -> data = 30;
	newnode3 -> next = newnode4;
	 
	newnode4 -> data = 40;
	newnode4 -> next = NULL;
	
	disp();
	
	return 0;
	
	
	/*
	struct node *newnode1, *newnode2, *newnode3, *newnode4;
	
	newnode1 = (struct node*) malloc(sizeof(struct node));
	newnode2 = (struct node*) malloc(sizeof(struct node));
	newnode3 = (struct node*) malloc(sizeof(struct node));
	newnode4 = (struct node*) malloc(sizeof(struct node));
	
	newnode1 -> data = 10;
	newnode1 -> next = newnode2;
	
	newnode2 -> data = 20;
	newnode2 -> next = newnode3;
	
	newnode3 -> data = 30;
	newnode3 -> next = newnode4;
	 
	newnode4 -> data = 40;
	newnode4 -> next = NULL;
	
	printf("data 1: %d	selfaddr 1: %d	nextaddr 1: %d\n", newnode1 -> data, newnode1, newnode1 -> next);
	printf("data 2: %d	selfaddr 2: %d	nextaddr 2: %d\n", newnode2 -> data, newnode2, newnode2 -> next);
	printf("data 3: %d	selfaddr 3: %d	nextaddr 3: %d\n", newnode3 -> data, newnode3, newnode3 -> next);
	printf("data 4: %d	selfaddr 4: %d	nextaddr 4: %d\n", newnode4 -> data, newnode4, newnode4 -> next);
	*/
	
}


// function to display the linked list elements
void disp()
{
	struct node *temp;
	
	temp = start;
	
	while(temp != NULL)
	{
		printf("data: %d	selfaddr: %d	nextaddr: %d\n", temp -> data, temp, temp -> next);
		temp = temp -> next;
	}
}

