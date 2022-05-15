#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%3d", &num);

    printf("The reversal is %d%d%d\n", num % 10, (num % 100)/10, num/100);

    return 0;
}
