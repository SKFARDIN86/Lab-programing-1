#include <stdio.h>
#include <stdlib.h>

struct Height {
    int feet;
    int inches;
};

struct Height addHeights(struct Height h1, struct Height h2) {
    struct Height total;
    int total_inches = h1.inches + h2.inches;
    int carry_feet = total_inches / 12;
    total.inches = total_inches % 12;
    total.feet = h1.feet + h2.feet + carry_feet;

    return total;
}

int main() {
    struct Height bignesh = {5, 10};
    struct Height harsh = {5, 6};
    struct Height totalHeight;

    printf("--- Total Height Calculator ---\n\n");
    printf("Bignesh's Height: %d feet, %d inches\n", bignesh.feet, bignesh.inches);
    printf("Harsh's Height:   %d feet, %d inches\n", harsh.feet, harsh.inches);

    totalHeight = addHeights(bignesh, harsh);

    printf("\n============================================\n");
    printf("The total combined height is:\n");
    printf("%d feet, %d inches\n", totalHeight.feet, totalHeight.inches);
    printf("============================================\n");

    return EXIT_SUCCESS;
}