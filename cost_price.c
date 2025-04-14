#include <stdio.h>

int main() {
    float total_sp, total_profit, total_cp, cp_per_item;

    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &total_sp);

    printf("Enter the total profit earned on them: ");
    scanf("%f", &total_profit);

    total_cp = total_sp - total_profit;

    cp_per_item = total_cp / 15;

    printf("The cost price of one item is: %.2f\n", cp_per_item);

}