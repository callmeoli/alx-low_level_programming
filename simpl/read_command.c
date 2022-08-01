#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* read_command - read command form user
* @cmd: pathname
* @par: parameters
* Return: void
*/
void read_command(char cmd[], char *par[])
{
	char line[1024];
	int count = 0, i = 0, j = 0;
	char *array[100], *pch;
	/*read one line*/
	for ( ;; )
	{
	int c = fgetc(stdin);

	line[count++] = (char) c;
	if (c == '\n')
		break;
	}
	if (count == 1)
		return;
	pch = strtok(line, "\n");

	/*parse the line into words*/
	while (pch != NULL)
	{
		array[i++] = strdup(pch);
		pch = strtok(NULL, "\n");
	}
	/* first word is the command */
	strcpy(cmd, array[0]);

	for (int j = 0; j < i; j++)
		par[j] = array[j];
		par[i] = NULL;
	/* NULL-terminate the parameter list */
}
