#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int i;
    pid_t pid;

    for (i = 0; i < 5; i++) {
        pid = fork();

        if (pid < 0) {
            perror("Fork failed");
            exit(1);
        } else if (pid == 0) {
		/* Child process*/
            printf("Child %d executing\n", i + 1);
            execlp("ls", "ls", "-l", "/tmp", NULL);
            perror("Exec failed");
            exit(1);
        } else {
		/*Parent process*/
		wait(NULL); /* Wait for child to exit before creating a new child*/
        }
    }

    return (0);
}
