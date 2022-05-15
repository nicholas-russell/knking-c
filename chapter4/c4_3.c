#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);

    printf("The reversal is %1d%1d%1d\n", n3, n2, n1);
    return 0;
}
