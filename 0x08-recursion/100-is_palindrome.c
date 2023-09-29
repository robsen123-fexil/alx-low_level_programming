#include "main.h"

/**
 * _strlen_recursion - returning  the string length.
 * @s: strings
 * Return: the string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares every characters in string.
 * @s: string
 * @n1: tinest increamtor.
 * @n2: largest increamtor.
 * Return:. 
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - identifies if a the strings are  palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 else (if not).
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
