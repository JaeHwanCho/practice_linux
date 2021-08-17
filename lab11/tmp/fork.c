#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid = 0, pid1 = 0, pid2 = 0, pid3 = 0; 
	pid1 = fork(); 
	pid2 = fork(); 
	pid3 = fork(); 
	for (int i = 0 ; i < 20; i++)
	{
		sleep(1); 
		printf("PID = %d %d %d %d %d \n", pid, pid1, pid2, pid3, i); 
	}
	system("cat output.txt");
}

