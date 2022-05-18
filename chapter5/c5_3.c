#include <stdio.h>

#define MINIMUM_COMMISSION 39.00f 

int main(int argc, char const *argv[])
{
    float commission, comp_commission, value, price_share;
    int num_share;

    printf("Enter the price per share: $");
    scanf("%f", &price_share);

    printf("Enter the number of shares: ");
    scanf("%d", &num_share);

    value = num_share * price_share;

    if (value < 2500.00f)
        commission = 30.00f + 0.17f * value;
    else if (value < 6250.00f)
        commission = 56.0f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;

    if (commission < MINIMUM_COMMISSION)
        commission = MINIMUM_COMMISSION;

    if (num_share < 2000)
        comp_commission = 33.00f + 0.03f * num_share;
    else
        comp_commission = 33.00f + 0.02f * num_share;

    printf("Commission: $%.2f\n", commission);
    printf("Competitors commission: $%.2f\n", comp_commission);

    return 0;
}
