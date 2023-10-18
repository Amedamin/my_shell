#include "hsh.h"

/**
 * my_getline - read input command from standard input
 * Return: input strings
 */

char *my_getline(void)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_index;
	static int buffer_size;

	char *line = NULL;
	int line_index = 0;
	char current_char;

	while (1)
	{
		if (buffer_index >= buffer_size)
		{
			buffer_size = read(STDIN_FILENO, buffer, BUFFER_SIZE);
			buffer_index = 0;

			if (buffer_size <= 0)
			{
				if (line_index == 0)
					return (NULL);
				break;
			}
		}

		current_char = buffer[buffer_index++];
		if (current_char == '\n')
			break;

		line = realloc(line, (line_index + 1) * sizeof(char));
		line[line_index++] = current_char;
	}

	if (line != NULL)
	{
		line = realloc(line, (line_index + 1) * sizeof(char));
		line[line_index] = '\0';
	}

	return (line);
}
