#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
	char num, letter;

	 for (num = 0; num <= 9; num++)
	 {
		 for (letter = 'a'; letter <= 'z'; letter++)
		 {
			 _putchar(letter);
		 }
		 _putchar('\n');
	 }
}
