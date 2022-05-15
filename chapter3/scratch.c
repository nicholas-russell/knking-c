#include <stdio.h>

int main(void) 
{
    float x;
    x = 2034.23567622456f;

    printf("|%-8.1e|\n", x);
    printf("|%10.6e|\n", x);
    printf("|%-8.3f|\n", x);
    printf("|%6.f|\n", x);
    return 0;
}