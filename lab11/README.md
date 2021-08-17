# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

## Lab11

### Tip

#### Important
**Logout must be done after using ssh.**

Only administrators can increase the priority

Lowering the priority is "nice {command}"

---
### Context Switching
A computer can only do one task at a time.

To solve this problem, several tasks are executed alternately in a very short period of time.



### Core vs Thread
**Core** is a physical CPU.(Actual)

**Thread** is a logical CPU.(Virtual)

CPU -> Processor

**fork, clone : Creating a process**

These days, we use clone more than fork.

Because fork is dangerous.

exit : Commands to terminate a process

---

**Thread.h** - C11 - Visual Studio(microsoft), OS
```
#include <threads.h>
#include <stdio.h>

int run(void *arg)
{
    printf("Hello world of C11 threads.");
    return 0;
}

int main(int argc, const char *argv[])
{
    thrd_t thread;
    int result;
    thrd_create(&thread, run, NULL);
    thrd_join(&thread, &result);
    printf("Thread return %d at the end\n", result);
}
```

---

**pthread.h** - POSIX - IEEE, GNU, gcc
```
#include <pthread.h>
#include <stdio.h>

void *run (void *arg)
{
    printf("Hello world of POSXI threads.");
    return 0;

}

int main()
{
	pthread_t thread;
	int result; 
	pthread_create(&thread, NULL, run, NULL );
	pthread_join(thread, &result);
	printf("Thread return %d at the end\n", result);
}
```


#### pthread.h

int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);

const pthread_attr_t *attr -> NULL

- because very difficult task

pthread_create() : Create Threads

pthread_join() : Wait until the thread is terminated, and when it is terminated, release the resource.

**mutex** - Use of "mutax" due to "static"
```
 static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
        static int a;
        if (pthread_mutex_lock(&mutex) == 0)
        {
                ++a;
                pthread_mutex_unlock(&mutex);
        }
        return(a);
```
