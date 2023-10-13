#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

int main(void)
{
    char *command = NULL;
    size_t command_len = 0;
    char *path;
    char *args[MAX_COMMAND_LENGTH];
    pid_t pid;

    while (1)
    {
        printf("shell> ");
        if (getline(&command, &command_len, stdin) == -1)
        {
            perror("Failed to read input");
            exit(1);
        }

        /* Remove trailing newline character */
        command[strcspn(command, "\n")] = '\0';

        pid = fork();

        if (pid < 0)
        {
            perror("Fork failed");
            exit(1);
        }
        else if (pid == 0)
        {
            /* Child process */
            path = strtok(command, " ");
            args[0] = path;
            args[1] = NULL;

            if (execve(path, args, NULL) == -1)
            {
                perror("Exec failed");
                exit(1);
            }
        }
        else
        {
            /* Parent process */
            wait(NULL);
        }
    }

    free(command);

    return (0);
}

