#include "hsh.h" 

void chDir(char* directory) { 
	char* home = getenv("HOME"); 
	char* previous = getenv("PWD"); 
	char* current = NULL; 

	if (directory == NULL) { 
		current = home; 
	} else if (strcmp(directory, "-") == 0) { 
		current = previous; 
	} else { 
		current = directory; 
	} 

	if (chdir(current) != 0) { 
		perror("cd"); 
	} else { 
		setenv("PWD", current, 1); 
	} 
}
