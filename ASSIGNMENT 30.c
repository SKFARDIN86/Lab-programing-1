#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks : ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("O");
    else if (marks >= 80 && marks <= 89)
        printf("A+");
    else if (marks >= 70 && marks <= 79)
        printf("A");
    else if (marks >= 60 && marks <= 69)
        printf("B+");
    else if (marks >= 50 && marks <= 59)
        printf("B");
    else if (marks >= 40 && marks <= 49)
        printf("C");
    else
        printf("Fail");

    return 0;
}
