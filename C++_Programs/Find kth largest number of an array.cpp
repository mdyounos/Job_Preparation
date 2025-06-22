#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

// Function to find the k-th largest element in an array
int kthLargest(int array_name[], int size, int k)
{
    // Sort the array in descending order using greater<int>()
    sort(array_name, array_name + size, greater<int>());

    // Return the (k-1)th element (as array indexing starts from 0)
    return array_name[k - 1];
}

int main()
{
    // Initialize an array of 5 elements
    int arr[5] = {5, 7, 8, 9, 14};

    // Call the kthLargest function to find the 1st largest element
    cout << kthLargest(arr, 5, 1) << endl;

    // Output will be 14 (the largest element in the array)
    return 0;
}
