#include <stdio.h>
#include <unix.std>
/**
 * main - A c program that print a line to the standard error
 * Return: always 1 (successful)
 * */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
