#include "main.h"

int main(int argc, char *argv[]){
    (void)argc, (void)argv;
    write(STDOUT_FILENO, "€ ", 8);
    return (0);
}
