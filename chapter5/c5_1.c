#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, num_digits;

    printf("Enter a number: ");
    scanf("%d",&n);

    if (9 >= n && n >= 0) {
        num_digits = 1;
    } else if (99 >= n && n >= 10) {
        num_digits = 2;
    } else if (999 >= n && n >= 100) {
        num_digits = 3;
    } else if (9999 >= n && n >= 1000) {
        num_digits = 4;
    }
    // Note that when it is more than 4 digits, or negative,
    // behaviour is undefined and will be whatever is at 
    // the memory address

    printf("The number %d has %d digits\n", n, num_digits);

    return 0;
}
