#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of the file from where it was compiled from
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *name;

	name = __FILE__;

	while (*name)
	{
		_putchar(*name++);
	}
	_putchar('\n');
	return (0);
}
