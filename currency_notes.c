#include <stdio.h>

int main() {
    int amount, note_100, note_50, note_10, remaining;

    printf("Enter the amount to withdraw (in ₹): ");
    scanf("%d", &amount);

    note_100 = amount / 100;
    remaining = amount % 100;

    note_50 = remaining / 50;
    remaining = remaining % 50;

    note_10 = remaining / 10;
    remaining = remaining % 10;

    printf("Number of 100rs notes: %d\n", note_100);
    printf("Number of 50rs notes: %d\n", note_50);
    printf("Number of 10rs notes: %d\n", note_10);

    if (remaining != 0) {
        printf("Remaining %d cannot be given with available denominations.\n", remaining);
    }

    return 0;
}
