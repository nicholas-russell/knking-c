#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int h, m;
    _Bool morning;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &h, &m);

    if (h < 11) {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", 
            h == 0 ? 12 : h, m);
    } else {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", 
            h == 12 ? 12 : h-12, m);
    }

    return 0;
}
