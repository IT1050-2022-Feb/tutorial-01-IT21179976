/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { 
   float mark1, mark2;//declare variables
	float average;
	
	printf("Enter the mark1:");//get user input
	scanf("%f", &mark1);
	
	printf("\nEnter the mark2:");//get user input
	scanf("%f", &mark2);
	
	average = (float)(mark1+mark2)/2;//calaulate the average
	printf("Average=%f",average);//print the average
	

  
  return 0;
}

