#include <stdio.h>
#include <stdlib.h>

int man()
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("unable to allocate buffer");
		exit(1);
	}
	printf("Type some thing: ");
	characters = getline(&buffer, &bufsize, stdin);
	printf("%zu characters were read.\n", characters);
	printf("You typed: '%s'\n", buffer);

	return (0);
}
