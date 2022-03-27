#include <stdio.h>

void butler(void);	// function prototyping

int main(void)
{
	printf("I'm going to invoke the butler function.\n");
	butler();
	printf("Yes. Please add me some more tea and writable DVDs.\n");

	return 0;
}

void butler(void)
{
	printf("Have you called, Sir?\n");
}
