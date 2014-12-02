#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define RED(a)     ANSI_COLOR_RED a ANSI_COLOR_RESET
#define GREEN(a)   ANSI_COLOR_GREEN a ANSI_COLOR_RESET
#define YELLOW(a)  ANSI_COLOR_YELLOW a ANSI_COLOR_RESET
#define BLUE(a)    ANSI_COLOR_BLUE a ANSI_COLOR_RESET
#define MAGENTA(a) ANSI_COLOR_MAGENTA a ANSI_COLOR_RESET
#define CYAN(a)    ANSI_COLOR_CYAN a ANSI_COLOR_RESET


int main(int argc, const char *argv[])
{
    printf("Hello World!\n");
    printf( RED("Hello World!") " My name is Matt\n");
    printf(GREEN("green!!!") "\n");
    printf(YELLOW("yellow") "\n");
    printf(BLUE("azul") "\n");
    printf(MAGENTA("purple") "\n");
    printf(CYAN("aquamarine") "\n");
    printf("Goodbye cruel world!!!\n");
}
