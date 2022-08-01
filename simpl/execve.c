#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char cmd[] = "/usr/bin/ls";
	char * argVec[] = {"ls", NULL};
	char * envVec[] = {NULL};
	
	printf("start of the execve fun");
	if (execve(cmd, argVec, envVec) == -1)
	perror("error");
	
	return 0;
}
