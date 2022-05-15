#include <stdio.h>

int main(void)
{
    int item, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: $");
    scanf("%f", &price);

    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("\t\tUnit\t\tPurchase\nItem\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", 
                item,
                price,
                day, month, year
    );

}