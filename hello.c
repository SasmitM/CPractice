#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *message = NULL;              // single pointer

    build_message(&message);           // pass address → char **

    if (message != NULL) {
        puts(message);
        free(message);                 // main owns the memory
    }

    return 0;
}

void build_message(char **msg) {
    *msg = malloc(50);                 // allocate on heap
    if (*msg == NULL) {
        return;
    }

    strcpy(*msg, "Hello Computer");
}