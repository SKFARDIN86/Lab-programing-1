 #include <stdio.h>

int main() {
    float weight, charge;

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    if (weight <= 10) {
        charge = weight * 30;
    }
    else if (weight <= 30) {
        charge = (10 * 30) + (weight - 10) * 20;
    }
    else {
        charge = (10 * 30) + (20 * 20) + (weight - 30) * 15;
    }

    printf("Charge = Rs. %.2f\n", charge);

    return 0;
}