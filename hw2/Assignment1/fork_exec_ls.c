#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();
    if(pid == 0) {
        // Child process
        execl("/bin/ls", "ls", NULL);
    } else {
        // Parent process
        printf("Parent process done\n");
    }
    return 0;
}
