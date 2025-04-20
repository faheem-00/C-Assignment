#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, d5;
    int new_num;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Extract each digit 
    d1 = num / 10000;              // first digit
    d2 = (num / 1000) % 10;        // second digit
    d3 = (num / 100) % 10;         // third digit
    d4 = (num / 10) % 10;          // fourth digit
    d5 = num % 10;                 // fifth digit

    d1 = (d1 + 1) % 10;
    d2 = (d2 + 1) % 10;
    d3 = (d3 + 1) % 10;
    d4 = (d4 + 1) % 10;
    d5 = (d5 + 1) % 10;

    
    new_num = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("The new number is: %d\n", new_num);

    return 0;
}