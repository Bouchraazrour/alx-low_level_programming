#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - A program that print a line without using the NAME section of the man
 * Return: 1 (Success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    	write(STDERR_FILENO, message, 42);
    	exit(1);
}
