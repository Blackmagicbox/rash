#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Print bash prompt symbol
  while (1) {
    printf("Ø  ");
    fflush(stdout);

    // Gets user input
    char input[100];
    fgets(input, 100, stdin);
    input[strlen(input) - 1] = '\0';

    // strcmp returns 0 if both strings are equal, 0 evaluates to false inside the "if".
    if (!strcmp(input, "exit")) {
      exit(0);
    }

    // If the command doesn't exist print an error
    printf("rsh: %s: command not found...\n", input);
  }
}
