#include <bits/stdc++.h>
#include <cmath> // Include cmath for mathematical functions
using namespace std;

typedef struct 
{
    int x, y;
} Point;

int main()
{
    Point point1, point2;
    float Length;
    
    // Input the coordinates for the two points
    cin >> point1.x >> point1.y >> point2.x >> point2.y;
    
    // Calculate the Euclidean distance between the two points
    Length = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
    
    // Output the calculated length
    cout << "Length between points: " << Length << endl;
    
    return 0; // Indicate successful program termination
}
