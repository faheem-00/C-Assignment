#include <stdio.h>

int main(){
    int num, rev, rem=0;

    printf("Enter a 5 digit no: ");
    scanf("%d", &num);

    int n=num;

    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

    printf("The reverse of the number is %d", rev);
}