#include <strings.h>
#include "main.h"

int main(int argc, char *argv[]) {
    (void) argc, (void) argv;
    char *buf = NULL;
    size_t count = 0;
    ssize_t nread;

    while (1) {

        write(STDOUT_FILENO, "€ ", 5);
        nread = getline(&buf, &count, stdin);

        if (nread == -1) {
            perror("Shell will be terminated:");
            exit(1);
        }

        if (strcmp(buf, "exit") != 0) {
            break;
        }

        printf("%s", buf);
    }
    free(buf);
    printf("Exiting the shell...\n");
    return (0);
}
