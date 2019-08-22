#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t my_pid;
	pid_t my_ppid;

	my_pid = getpid();
	my_ppid = getppid();
	printf("This is the parent process ID: %u\n", my_ppid);
	printf("This is a process ID: %u\n", my_pid);
	return (0);
}
