#include "main.h"

/**
 * Main entry - Prints a code for Betty
 * 
 * Return 0 (success)
 */
 
int main(void) {
    const char *code = "Hello, World!\n";
    write(1, code, strlen(code));

    return 0;
}
