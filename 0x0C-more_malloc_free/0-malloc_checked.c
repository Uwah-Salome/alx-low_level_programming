#include <stdlib.h>

void _putchar(char c);

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b); // Allocate memory using malloc
    
    if (ptr == NULL) {
        char error_message[] = "Memory allocation failed. Exiting with status 98.\n";
        for (unsigned int i = 0; error_message[i] != '\0'; i++) {
		 _putchar(error_message[i]);
        }
        exit(98); // Terminate the process with status 98
    }

    return ptr;
}
