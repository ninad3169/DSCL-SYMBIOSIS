#include <stdio.h>
{
  int x = 5;
  printf("x: %d\n", x); //Value fo X

 
  printf("address of x: %p", &x);//Address of X
  
  int p = 7;
  printf("p: %d\n", p);//Assigning Value to p

 
  printf("address of p: %p", &p);//Mentioning address of p
  
  int *p = 9;
  printf("*p: %d\n", *p);// Changin value of p from 7 to 9
  
    
  return 0;
}
