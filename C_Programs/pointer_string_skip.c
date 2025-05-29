#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, length;

    // Initialize a string with an embedded null character
    char string[] = "Hello\0, World!!";

    // Calculate the length of the string using strlen (stops at first null character)
    length = strlen(string);

    // Pointer to the start of the string
    char *s = string;

    // Loop through the string and print each character (starting from the second one)
    for (i = 0; i < length; ++i)
        printf("%c", *++s);  // Pre-increment skips the first character

    return 0;
}
