#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 9, 6, 3, 1, 4, 7, 0};
    int del, n = 10;

    cout << "Your array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nEnter the value to delete: ";
    cin >> del;

    // Shift elements left if they do not match the delete value
    int j = 0; // j tracks new index after deletion
    for (int i = 0; i < n; i++) {
        if (arr[i] != del) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Update size of array after deletion
    n = j;

    cout << "\nThe array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
