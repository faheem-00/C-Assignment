#include <stdio.h>

#define PI 3.14

int main() {
    float area, r, peri;
    float area_rec, l, b, peri_rec;

    // Input for Circle
    printf("Enter the Radius of circle: ");
    scanf("%f", &r);  

    // Input for Rectangle
    printf("Enter the length and breadth of Rectangle: ");
    scanf("%f %f", &l, &b);  

    // Calculations for Circle
    area = PI * r * r;
    peri = 2 * PI * r;
    printf("Area of the circle is %.2f \n", area);
    printf("Circumference of the circle is %.2f \n", peri);

    // Calculations for Rectangle
    area_rec = l * b;
    peri_rec = 2 * (l + b); 
    printf("Area of the Rectangle is %.2f \n", area_rec);
    printf("Perimeter of the Rectangle is %.2f \n", peri_rec);

    return 0;
}

