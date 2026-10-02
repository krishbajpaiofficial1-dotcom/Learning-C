//program to input an alphabet and determine whether it is a vowel or consonant.
#include <stdio.h>
int main() {
    char c;
    printf("Enter an alphabet: "); //prompt user for input
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') { // check if the character is a vowel
        printf("%c is a vowel \n", c);
    } else {
        printf("%c is a consonant \n", c); // if not a vowel, it is a consonant
    }
    return 0;
}