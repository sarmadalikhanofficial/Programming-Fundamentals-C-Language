#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to read the string

    // Input character to find its frequency
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch); // Space before %c to ignore any leading whitespace

    // Count the frequency of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output the result
    printf("Frequency of '%c': %d\n", ch, count);

    return 0;
}
