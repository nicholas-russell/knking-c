#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int area, first, second;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &first, &second);
    
    printf("You entered %d.%d.%d\n", area, first, second);

    return 0;
}
