#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    fork();
    fork();
    fork();
    printf("PID: %d, PPID: %d\n", getpid(), getppid());
    return 0;
}
