#include "main.h"
/**
 * _isalpha - checks alphabet
 * @c: Character to be checked
 * Return: 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
