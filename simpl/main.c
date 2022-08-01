#include <stdio.h>
#include "main.h"

int main()
{
	char cmd[100], command[100], *parameters[20];
	// enviroment variable
	char *envp[] = { (char *) "PATH=/bin", 0};
	while (1) //repear forever
	{
	type_prompt();		//diaplay prompt on screen
	read_command ( command, parameters );
	return 0;
}
