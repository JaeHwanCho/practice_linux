#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int add() 
{	
	static int a; 
    	++a;
	return(a); 
}

void *run (void *arg)
{
	for (int i=0; i < 30; i++)
	{
		//sleep(1); 	
    		printf("I am thread %d\n", add());
	}
     	return 0;
}

int main()
{
	pthread_t thread[10];
	pthread_create(&thread[0], NULL, run, NULL );
	pthread_create(&thread[1], NULL, run, NULL );
	pthread_create(&thread[2], NULL, run, NULL );
	pthread_create(&thread[3], NULL, run, NULL );
	pthread_create(&thread[4], NULL, run, NULL );
	pthread_create(&thread[5], NULL, run, NULL );
	pthread_create(&thread[6], NULL, run, NULL );
	pthread_create(&thread[7], NULL, run, NULL );
	pthread_join(thread[7], NULL);
	printf("All Joined\n"); 
}

