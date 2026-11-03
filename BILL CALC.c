#include <stdio.h>

int main() {
    float units, bill;
    printf("Enter number of units consumed: ");
    scanf("%f", &units);
    if (units < 0) {
        printf("Error: Consumption cannot be a negative number!\n");
    }
    else if (units <= 100) {
        bill = units * 50;
        printf("Total bill: %.2f frs\n", bill);
    }
    else if (units > 100 && units < 200) {
        bill = units * 75;
        printf("Total bill: %.2f frs\n", bill);
    }
    else {
        bill = units * 100;
        printf("Total bill: %.2f frs\n", bill);
    }

    return 0;
}
