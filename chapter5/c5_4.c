#include <stdio.h>

int main(void) {

    int knots;

    printf("What is the wind speed in knots: ");
    scanf("%d", &knots);

    printf("On the Beaufort scale, that is described as ");

    if (knots < 1)
        printf("calm.\n");
    else if (knots < 4)
        printf("light air.\n");
    else if (knots < 28)
        printf("a breeze.\n");
    else if (knots < 48)
        printf("a gale.\n");
    else if (knots < 64)
        printf("a storm.\n");
    else
        printf("a hurricane.\n");

    return 0;
}