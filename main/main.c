#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libs/libexample/example.h"

void *thread(void *params) {
    printf("Thread - %ld\n", pthread_self());
    sleep(60);
    printf("Finish Thread - %ld\n", pthread_self());
}

int main(int argc, char **argv) {
    printf("Starting...\n");
    // create the thread objs
    pthread_t thread1, thread2;
    // start the threads
    pthread_create(&thread1, NULL, *thread, NULL);
    pthread_create(&thread2, NULL, *thread, NULL);
    // wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    return just_some_zero();
}