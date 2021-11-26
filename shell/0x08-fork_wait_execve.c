#include "main.h"

/**
 * main -  wait fork excecv
 * Return: int
 *
 *
 */


int main(void)
{
	/** argv[0] == path*/
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t my_pid;
	pid_t child_pid;
	int status, i = 0;

	while (i < 5)
	{
		/**
		 * first, we fork the process, and a new similar process
		 * starts executing.
		 */
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}

		/** if ID == 0, then we are in the child process*/
		if (child_pid == 0)
		{
			/**
			 * Afterwards, whilst in the child process, we us
			 * excecve to replace the process with a new one.
			 */
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		else
		{
			wait(&status);
		}
		my_pid = getpid();
		printf("Parent: %u\nChild:%u\n", my_pid, child_pid);
		i++;
	}
return (0);
}


