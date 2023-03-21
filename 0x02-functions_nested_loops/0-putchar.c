#include "main.h"
/**
 * main - a program that prints _putchar followed by new line
 * Return: 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
