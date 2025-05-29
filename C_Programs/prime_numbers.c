#include <stdio.h>   // Include standard input-output library
#include <stdbool.h> // Include for using boolean data types in C

int main() {
    int N = 100;  // Define the upper limit to find prime numbers

    // Print header message
    printf("List of prime numbers 1 to %d: ", N);

    // Loop through numbers from 2 to N
    for (int i = 2; i <= N; i++) {
        bool CheckBit = true;  // Assume current number is prime

        // Check divisibility from 2 to i/2
        for (int j = 2; j <= (i / 2); j++) {
            if (i % j == 0) {
                // If divisible, then it's not a prime number
                CheckBit = false;
                break;  // No need to check further
            }
        }

        // If number is prime, print it
        if (CheckBit == true) {
            printf("%d ", i);
        }
    }

    return 0; // Indicate that program ended successfully
}
