#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    pid_t pid1 = fork();

    if (pid1 == 0) {
        printf("Child 1 PID = %d\n", getpid());
        exit(42);
    }

    pid_t pid2 = fork();

    if (pid2 == 0) {
        printf("Child 2 PID = %d\n", getpid());
        exit(24);
    }

    int status;
    waitpid(pid2, &status, 0);
    printf("Parent waited for Child 2, exit status = %d\n", WEXITSTATUS(status));

    waitpid(pid1, &status, 0);
    printf("Parent waited for Child 1, exit status = %d\n", WEXITSTATUS(status));

    return 0;
}
