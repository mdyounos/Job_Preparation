#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 8, 7, 9, 5};
    int searching_value = 7;

    // Display the original array
    cout << "The original array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    // Search for the value in the array
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == searching_value) {
            cout << "\nFound the searching value: " << arr[i] << endl;
            found = true;
            break;
        }
    }

    // If not found
    if (!found) {
        cout << "\nDid not find the searching value." << endl;
    }

    return 0;
}
