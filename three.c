#include “hsh.h”

/**
 * char *str_tok - a function that spilt the string
 * @in: command input
 * @separator: space separates words
 * @no_of_words: count the number of words
 * Return: string
 */

char **str_tok(char *in, char separator, size_t *no_of_words)
{
	int wordIndex = 0;
	*no_of_words = 1;
	char str[1024];

	_strcpy(str, in);

	char *wordStart = str;
	size_t x;

	for (int i = 0; in[i] != '\0'; i++)
	{
		if (in[i] == separator)
		{
			(*no_of_words)++;
		}
	}

	char **command_array = malloc(*no_of_words * sizeof(char *));

	if (command_array == NULL)
	{
		perror("Error (malloc)");
		free(in);
		exit(EXIT_SUCCESS);
	}

	x = *no_of_words;
	free_all(command_array, x);
	exit(EXIT_SUCCESS);
}

if (!in)
{
	perror("Error (empty)");
	free_all(command_array, x);
	free(in);
	free(wordStart);
	exit(EXIT_SUCCESS);
}

	for (int i = 0; str[i] != '\0'; i++)
{
		if (str[i] == separator)
		{
			str[i] = '\0';
			command_array[wordIndex++] = wordStart;
			wordStart = &str[i + 1];
		}
	}
command_array[wordIndex] = wordStart;

return (command_array);
}
