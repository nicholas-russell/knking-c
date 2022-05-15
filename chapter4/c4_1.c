#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%2d", &num);

    printf("The reversal is %d%d\n", num % 10, num/10);

    return 0;
}
