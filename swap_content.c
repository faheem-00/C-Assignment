#include <stdio.h>

int main(){
    int C,D;
    int temp;

    printf("Enter any 2 numbers in C & D: ");
    scanf("%d %d", &C,&D);

    printf("Values before swapping; C=%d, D=%d \n", C, D);

    temp=C;
    C=D;
    D=temp;

    printf("The swapped values; C=%d, D=%d", C, D);

}