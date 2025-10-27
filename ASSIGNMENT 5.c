#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // space before %c to skip any whitespace/newline

    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
