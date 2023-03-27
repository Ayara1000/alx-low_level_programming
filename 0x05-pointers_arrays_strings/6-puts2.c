#include "main.h"

/**
 * puts2 - takes in an array of pointers to chars and
 * prints every second char to stdout using _putchar
 * @str: pointer to the string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
