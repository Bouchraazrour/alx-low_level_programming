#include "main.h"
/**
 * main - a program that prints the alphabet
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}