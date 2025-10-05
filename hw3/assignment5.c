#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child process exiting\n");
        exit(0);
    } else {
        printf("Parent sleeping, child becomes zombie\n");
        sleep(30); // Observe with `ps` or `htop`
        // Uncomment below to fix zombie:
        // wait(NULL);
    }

    return 0;
}
