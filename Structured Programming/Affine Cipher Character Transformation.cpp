/*AP, ISTCL-2026*/
/*Problem Statement: Write a robust program that reads a multi-word string and two integer coefficients, a and b, from standard input to perform an element-wise text transformation based on the Affine Cipher formula, \(f(x) = (a \cdot x + b) \pmod{26}\). The algorithm must map each character to its 0-indexed alphabetic position (\(A/a = 0, B/b = 1, \dots, Z/z = 25\)), evaluate the formula while securely wrapping bounds to handle negative shifts, and strictly maintain case preservation (uppercase remains uppercase, lowercase remains lowercase). Any non-alphabetic elements, including spaces and punctuation, must be preserved exactly as input, and the final transformed string must be output to standard console.*/
/*Enter a string: Hello World
Enter value for a: 5
Enter value for b: 8
Transformed string: Rclla Oaplx*/


#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to apply the transformation f(x) = a * x + b
string transformString(string text, int a, int b) {
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        
        if (isupper(c)) {
            // Map 'A'-'Z' to 0-25
            int x = c - 'A'; 
            // Apply formula and wrap around using modulo 26
            int fx = (a * x + b) % 26; 
            // Handle negative results in case b is negative
            if (fx < 0) fx += 26; 
            // Map back to ASCII character
            text[i] = fx + 'A'; 
        } 
        else if (islower(c)) {
            // Map 'a'-'z' to 0-25
            int x = c - 'a'; 
            // Apply formula and wrap around using modulo 26
            int fx = (a * x + b) % 26; 
            // Handle negative results
            if (fx < 0) fx += 26; 
            // Map back to ASCII character
            text[i] = fx + 'a'; 
        }
        // Non-alphabetic characters (spaces, punctuation) remain unchanged
    }
    return text;
}

int main() {
    string inputString;
    int a, b;

    // Get the string from the user
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Get the constants a and b
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    // Transform and display the result
    string result = transformString(inputString, a, b);
    cout << "Transformed string: " << result << endl;

    return 0;
}
