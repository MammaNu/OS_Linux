#include "wrapper.h"

#define MAX_SIZE 1024

int MQcreate (mqd_t * mq, char * name)
{
    /* Creates a mailslot with the specified name. Uses mq as reference pointer, so that you can 	reach the handle from anywhere */
    /* Should be able to handle a messages of any size */
    /* Should return 1 on success and 0 on fail*/

}
int MQconnect (mqd_t * mq, char * name)
{
    /* Connects to an existing mailslot for writing Uses mq as reference pointer, so that you can 	reach the handle from anywhere*/
    /* Should return 1 on success and 0 on fail*/
}

int MQread (mqd_t * mq, void ** refBuffer)
{
    /* Read a msg from a mailslot, return nr Uses mq as reference pointer, so that you can 		reach the handle from anywhere */
    /* of successful bytes read              */
}

int MQwrite (mqd_t * mq, void * sendBuffer)
{
    /* Write a msg to a mailslot, return nr Uses mq as reference pointer, so that you can 	     reach the handle from anywhere*/
    /* of successful bytes written         */
}

int MQclose(mqd_t * mq, char * name)
{
    /* close a mailslot, returning whatever the service call returns Uses mq as reference pointer, so that you can 	
    reach the handle from anywhere*/
    /* Should return 1 on success and 0 on fail*/
}
int threadCreate (void * functionCall, int threadParam, pthread_t *traden)
{
	pthread_attr_t attr;
	pthread_attr_init(&attr);

	printf("Creating thread\n");
	int status = pthread_create(traden, &attr, functionCall, NULL);

	if(status != 0){
		printf("Error no thread created\n");
	}

	/* Creates a thread running threadFunc */
	/* Should return 1 on success and 0 on fail*/
}



