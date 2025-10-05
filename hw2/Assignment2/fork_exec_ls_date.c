#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid1 = fork();
    if(pid1 == 0) {
        execl("/bin/ls", "ls", NULL);
    } else {
        pid_t pid2 = fork();
        if(pid2 == 0) {
            execl("/bin/date", "date", NULL);
        } else {
            wait(NULL);
            wait(NULL);
            printf("Parent process done\n");
        }
    }
    return 0;
}
