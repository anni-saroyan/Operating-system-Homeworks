#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1 = fork();
    if (pid1 == 0) exit(10);

    pid_t pid2 = fork();
    if (pid2 == 0) exit(20);

    int status;
    waitpid(pid1, &status, 0);
    if (WIFEXITED(status))
        printf("Child 1 exited with code %d\n", WEXITSTATUS(status));
    else
        printf("Child 1 did not exit normally\n");

    waitpid(pid2, &status, 0);
    if (WIFEXITED(status))
        printf("Child 2 exited with code %d\n", WEXITSTATUS(status));
    else
        printf("Child 2 did not exit normally\n");

    return 0;
}
