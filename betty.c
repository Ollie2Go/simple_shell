#include <string.h>
#include <unistd.h>

/**
 * Main entry - Code that passess Betty checks
 *
 * Returns 0 (success)
 */

int main(void)
{
    const char *code = "Hello, Betty.\n";	
    write(1, &code, strlen(code));
    return 0;
}
