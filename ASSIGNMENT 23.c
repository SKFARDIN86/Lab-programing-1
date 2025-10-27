#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character to check whether vowel or consonant: ");
    scanf("%c", &c);

    if (c=='a' || c=='A' || c=='e' || c=='E' || 
        c=='i' || c=='I' || c=='o' || c=='O' || 
        c=='u' || c=='U')
        printf("The character is a vowel.");
    else
        printf("The character is a consonant.");

    return 0;
}
