#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int a, j = 0, s;
	char *z;
	char *p;

	if (ac == 0 || av == NULL)
	{        
		return (NULL);
	}        

	/* Calculate the total length of the concatenated string including newlines */
	for (a = 0; a < ac; a++)
	{
		j += strlen(av[a]) + 1; /* +1 for the newline character */
	}

	z = (char *) malloc(j * sizeof(char)); /* Allocate memory for z */
	if (z == NULL)
	{
		return (NULL);
	}

	/* Copy the arguments into z with newline characters */
	for (a = 0; a < ac; a++)
	{
		s = strlen(av[a]);
		strncat(z, av[a], s);
		if (a < ac - 1) /* Add newline character after all arguments except the last one */
		{
			strncat(z, "\n", 2);
		}
	}

	p = (char *) malloc(j * sizeof(char)); /* Allocate memory for p */
	if (p == NULL)
	{
		free(z); /* Free memory allocated for z if allocation for p failed */
		return(NULL);
	}

	strncpy(p, z, j); /* Copy z to p */
	free(z); /* Free memory allocated for z */
	return (p);
}
