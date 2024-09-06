//#include <stdio.h>
#include "main.h"


int main(int argc, char *argv[]) {

    while (1) {
        (void) argc, (void) argv;
        char *buf = NULL;
        size_t count = 0;
        ssize_t nread;

        write(STDOUT_FILENO, "€ ", 5);
        nread = getline(&buf, &count, stdin);

        if (nread == -1) {
            perror("Exiting shell");
            exit(1);
        }

        printf("%s", buf);
        free(buf);

        return (0);
    }
}
