#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc;

	for (abc = '0'; abc <= '9'; abc++)
		putchar(abc);
	for (abc = 'a'; abc <= 'f'; abc++)
		putchar(abc);
	putchar('\n');
	return (0);
}
