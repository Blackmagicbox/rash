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
    // Copy input to parse commands and arguments
    char _input[100], param[100];
    strcpy(_input, input);

    char *command = strtok(_input, " ");
    int n = (int) strlen(command) + 1;

    strncpy(param, input + n, strlen(input));

    // strcmp returns 0 if both strings are equal, 0 evaluates to false inside the "if".
    if (!strcmp(command, "exit")) {
      exit(0);
    }

    // Compare the token extracted from the beginning of the Input  and check if it's an echo command.
    if (!strcmp(command, "echo")) {
      printf("%s\n", param);
      continue;
    }
      // If the command doesn't exist print an error
      printf("rsh: %s: command not found...\n", input);
  }
}
