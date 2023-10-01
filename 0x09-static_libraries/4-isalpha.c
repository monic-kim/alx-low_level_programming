#include "main.h"
/**
 * _isalpha - a function that checks for alphabet characters
 * @c: char to be checked
 * Return: 1 if c is a letter and 0 if c is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
