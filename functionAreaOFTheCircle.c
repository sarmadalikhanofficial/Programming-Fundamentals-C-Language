#include <stdio.h>

#define PI 3.14159 // Define PI as a constant

float area(float r) {
    float a = PI * r * r;
    return a;
}

int main() {
    float radius;

    printf("Enter The Radius of the Circle: ");
    scanf("%f", &radius); 

    float area_of_circle = area(radius); 
    printf("The Area of The Circle is = %.2f\n", area_of_circle);

    return 0;
}
