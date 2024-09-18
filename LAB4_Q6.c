#include <stdio.h>

int main() {
    float cost, discount, discountAmount, finalAmount;

    printf("Enter the total cost of items: ");
    scanf("%f", &cost);

    if (cost < 500) {
        printf("Total cost is less than the minimum eligible amount for discount.\n");
        return 0;
    }

    if (cost < 2000) {
        discount = 0.05; // 5%
    } else if (cost >= 2000 && cost < 4000) {
        discount = 0.10; // 10%
    } else if (cost >= 4000 && cost < 6000) {
        discount = 0.20; // 20%
    } else {
        discount = 0.35; // 35%
    }

    discountAmount = cost * discount;
    finalAmount = cost - discountAmount;

    printf("Actual amount: %.2f\n", cost);
    printf("Amount saved: %.2f\n", discountAmount);
    printf("Amount after discount: %.2f\n", finalAmount);

    return 0;
}
