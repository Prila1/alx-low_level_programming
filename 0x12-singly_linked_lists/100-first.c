#include <stdio.h>

void start(void) __attribute__((constructor));

/**
 * premain - prints amessage before the main function
 * This function uses the constructor attribute to run before main
 */
	void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
