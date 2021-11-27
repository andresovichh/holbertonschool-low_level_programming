#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;
typedef struct tok 
{
	char token;
	unsigned int *ptr;
} tok;

#endif
