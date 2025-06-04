/*TGTDCL
AE(CSE)
Exam Taker: BUET
Exam Date: 08-10-2021*/

#include<iostream>
using namespace std;

// Function to compute XOR of 'size' elements from the beginning of the array
int f(int *arr, int size) {
    int x = 0;  // Initialize result variable
    for (int i = 0; i < size; i++) {
        x = x ^ *(arr + i);  // XOR current element with x
        // Equivalent to: x = x ^ arr[i];
    }
    return x;  // Return the cumulative XOR result
}

int main() {
    // Declare and initialize array with 8 binary values
    int arr[] = {0, 1, 1, 0, 1, 1, 0, 1};

    // Call function 'f' with different sizes and print the results consecutively
    // f(arr, 2) => XOR of first 2 elements: 0 ^ 1 = 1
    // f(arr, 3) => 0 ^ 1 ^ 1 = 0
    // f(arr, 5) => 0 ^ 1 ^ 1 ^ 0 ^ 1 = 1
    // f(arr, 8) => XOR of all elements = 1
    cout << f(arr, 2)   // prints 1
         << f(arr, 3)   // prints 0
         << f(arr, 5)   // prints 1
         << f(arr, 8);  // prints 1

    return 0;
}
