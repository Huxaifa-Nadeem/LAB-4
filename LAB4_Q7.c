#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, amountCharged, surcharge, netAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    if (unitsConsumed < 200) {
        amountCharged = unitsConsumed * 16.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 300) {
        amountCharged = unitsConsumed * 20.10;
    } else if (unitsConsumed >= 300 && unitsConsumed < 500) {
        amountCharged = unitsConsumed * 27.10;
    } else {
        amountCharged = unitsConsumed * 35.90;
    }

    if (amountCharged > 18000) {
        surcharge = amountCharged * 0.15; // 15% surcharge
    } else {
        surcharge = 0;
    }

    netAmount = amountCharged + surcharge;

    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Amount Charges @Rs. %.2f per unit: %.2f\n", (amountCharged / unitsConsumed), amountCharged);
    printf("Surcharge Amount: %.2f\n", surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n", netAmount);

    return 0;
}
