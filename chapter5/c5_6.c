#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, nchk,
        sum1, sum2, total, calc_nchk;
    printf("Enter a 13 digit EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
            &n1, &n2, &n3, &n4, &n5, &n6, 
            &n7, &n8, &n9, &n10, &n11, &n12);
    
    sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    total = sum1 * 3 + sum2;

    calc_nchk = 9 - ((total -1 ) % 10);

    if (nchk = calc_nchk)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}