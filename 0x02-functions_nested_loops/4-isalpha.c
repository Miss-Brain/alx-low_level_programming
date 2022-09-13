#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: paramter member c
 * Return: returns 1 or 0 if success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
