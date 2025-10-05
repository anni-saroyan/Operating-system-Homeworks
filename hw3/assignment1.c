#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child process: PID = %d\n", getpid());
        exit(0);
    } else if (pid > 0) {
        // Parent process
        printf("Parent process: PID = %d\n", getpid());
    } else {
        perror("fork failed");
        return 1;
    }

    return 0;
}
