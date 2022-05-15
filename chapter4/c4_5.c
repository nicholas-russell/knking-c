#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int d, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5,
        first_sum, second_sum, total;
    printf("Enter the first 11 digits of a UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
        &d, &m1, &m2, &m3, &m4, &m5, 
        &p1, &p2, &p3, &p4, &p5);

    first_sum = d + m2 + m4 + p1 + p3 + p5;
    second_sum = m1 + m3 + m5 + p2 + p4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    
    return 0;
}
