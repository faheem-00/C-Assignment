#include<stdio.h>

int main(){
    float distance,meters,cm,mm, inches, feet;
    printf("Enter the distance b/w 2 cities:");
    scanf("%f", &distance);

    meters= distance*1000;
    printf("Distance in metres is %f \n:", meters);

    cm= meters*100;
    printf("Distance in cm is %f \n:", cm);

    mm= cm*10;
    printf("Distance in mm is %f \n:", mm);
    
    inches= cm/2.5;
    printf("Distance in Inches is %f \n:", inches);

    feet= inches/12;
    printf("Distance in Feets is %f \n:", feet);

}