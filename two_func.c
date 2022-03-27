/*
 * two_func.c -- A program using two functions in one file.
 */
#include <stdio.h>

void butler(void);  // function prototyping

int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me more tea.");

	return 0;
}

void butler(void)
{
	printf("You rang, sir?\n");
}