#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - A program that print a line without using the NAME section of the man
 * Return: 1 (Success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";


	write(STDERR_FILENO, msg, 59);


	exit(1);
}
