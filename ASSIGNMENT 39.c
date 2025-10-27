 #include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area, perimeter;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;
    s = perimeter / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    if (area == perimeter)
        printf("Equable triangle\n");
    else
        printf("Not an equable triangle\n");

    return 0;
}
