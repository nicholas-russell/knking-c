#include <stdio.h>

int main(int argc, char const *argv[])
{
    int aa, ab, ac, ad,
        ba, bb, bc, bd,
        ca, cb, cc, cd,
        da, db, dc, dd;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
            &aa, &ab, &ac, &ad,
            &ba, &bb, &bc, &bd,
            &ca, &cb, &cc, &cd,
            &da, &db, &dc, &dd);
    
    printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n", 
            aa, ab, ac, ad, 
            ba, bb, bc, bd,
            ca, cb, cc, cd,
            da, db, dc, dd);

    printf("Row sums: %d %d %d %d\n", 
        (aa+ab+ac+ad), (ba+bb+bc+bd), (ca+cb+cc+cd), (da+db+dc+dd));

    printf("Column sums: %d %d %d %d\n", 
        (aa+ba+ca+da), (ab+bb+cb+db), (ac+bc+cc+dc), (ad+bd+cd+dd));
    
    printf("Diagnol sums: %d %d\n",
        (aa + bb + cc + dd), (da + cb +bc +ad));

    return 0;
}
