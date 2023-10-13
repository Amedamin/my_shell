#include "hsh.h"

/**
 *in_env - gets the value of a speficied environment variable
 * @in_env: Variable to look for in environment
 * Return: Pointer to start index of the value.
 */

char *in_env(char *in_env)
{
	char **ptr = environ;
	size_t len = _strlen(in_env);

	while (*ptr)
	{

		if (_strncmp(*ptr, in_env, len) == 0 &&
				(*ptr)[len] == '=')
		{
			return (&((*ptr)[len + 1]));
		}
		ptr++;
	}
	reture(NULL);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

/**
 * _strncmp - This program compares the first n characters of two strings.
 *@str1:First string to be competed.
 *@str2: Second string to be competed.
 * @n: Number of characters to compare.
 *Return: negative, positive or zero integer.
 */

int _strncmp(char *str1, char *str2, size_t n)
{ int i, diff;

	for (i = 0; i < n; i++)
	{
		diff = str1[i] - str2[i];
		if (diff > 0 || diff < 0)
			return (diff); }
	return (0);
}
