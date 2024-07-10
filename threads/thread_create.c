#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
void *thread1(void *p)
{
	printf("%s\n",p);
	printf("thread1 ID : %u\n",pthread_self());
	while(1);
}
void *thread2(void *p)
{
	printf("%s\n",p);
	printf("thread2 ID : %u\n",pthread_self());
	while(1);
}
int main()
{
	printf("Main thread\n");
	pthread_t t1,t2;
	pthread_create(&t1,0,thread1,0);
	pthread_create(&t2,0,thread2,0);
	while(1);	
}
