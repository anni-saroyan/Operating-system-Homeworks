#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int x = 42;
    int *ptr = &x;

    printf("Pointer address is: %p\n", (void*)&ptr);
    printf("Pointer value is: %p\n", (void*)ptr);
    printf("Value pointed to: %d\n", *ptr);

    pid_t pid = fork();
    if (pid == 0) { 
        printf("Executing child program...\n");
        execl("./child_memory", "./child_memory", (char*)NULL);
        perror("execl failed"); // if exec fails
        exit(1);
    } else {
        int status;
        waitpid(pid, &status, 0);
        printf("Parent PID: %d, waiting for child.\n", getpid());
    }

    return 0;
}

