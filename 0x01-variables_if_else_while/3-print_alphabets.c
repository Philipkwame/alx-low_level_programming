#include <stdio.h>


/**
 *  main - program that prints the alphabet in lowercase and upper case
 *
 *  Return: Always 0.
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);

	for (i = 'A' ; i <= 'Z' ; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
