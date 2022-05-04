#include <stdio.h>
#include <stdlib.h>

void newFunctionOne(void)
{

	puts(" Here is the message returning from newFunctionOne.");

}

int main()
{

	atexit(newFunctionOne);
	puts("\n This is the message from main function.");

	return 0;

}
