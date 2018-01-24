#include "wrapper.h"

pthread_t thread1;
pthread_t thread2;

void counter10();
void counter5();



int main(void)
{
	threadCreate(counter10,999, &thread1);
	threadCreate(counter5,999, &thread2);

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	pthread_cancel(thread1);
	pthread_cancel(thread2);

	return 0;
}


void counter10()
{
	int counter = 0;
	while(counter<10){
		counter++;
		printf("%d\n",counter);
		usleep(500000);
	}
}


void counter5()
{
	int counter = 5;
	while(counter>0){
		counter--;
		printf("%d\n",counter);
		usleep(2000000);
	}
}
