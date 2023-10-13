#include "hsh.h"
/**
 * exe -handles the exeation of other processes.
 * @words: Arguments passed to the shell program.
 * @no_of_words: Number of arguments passed.
 * @env: Environment variables from the current system.
 * This function handles execution of an executable file
 * if it is detected in the current directory of in PATH.
 * *Return: Nothing If successful or error if it fails.
 */

int exe(char **words, int no_of_words, char **env)
{
	if (execve(words[0], words, env) == -1)
	{ free_all(words, no_of_words);
		perror("./hsh: ");
		exit(EXIT FAILURE); }
}
