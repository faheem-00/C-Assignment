#include <stdio.h>

int main(){
    float cel,fah;

    printf("Enter the temperature in Fahrenhiet:");
    scanf("%f", &fah);


    cel= (fah-32)*5/9;
    printf("The Temperature of %.1f%cF is equal to %.2f%cC \n", fah,248, cel,248);

    return 0;
}
