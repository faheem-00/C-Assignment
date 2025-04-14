#include <stdio.h>

int main(){
    int num, rem, sum=0;

    printf("Enter 4 digit number: ");
    scanf("%d", &num);

    int n=num;

    rem=n%10;
    sum=sum+rem;
    n=n/10;

    rem=n%10;
    n=n/10;

    rem=n%10;
    n=n/10;

    rem=n%10;
    sum=sum+rem;
    n=n/10;


    printf("The Sum of the first and last digits of the number is %d", sum);
}