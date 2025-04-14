#include <stdio.h>

int main(){
    int num, rem, sum=0;

    printf("Enter a 5 digit no: ");
    scanf("%d", &num);

    int n=num;

    rem=n%10;
    sum=sum+rem;
    n=n/10;


    rem=n%10;
    sum=sum+rem;
    n=n/10;


    rem=n%10;
    sum=sum+rem;
    n=n/10;


    rem=n%10;
    sum=sum+rem;
    n=n/10;


    rem=n%10;
    sum=sum+rem;
    n=n/10;

    printf("The Sum of the digits of the number is %d", sum);
}