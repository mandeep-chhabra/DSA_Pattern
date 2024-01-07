#include <iostream>
using namespace std;

// Flipped Solid Diamond
//     * * * * *  * * * * *
//     * * * *      * * * *
//     * * *          * * *
//     * *              * *
//     *                  *  ----> Upper Structure
//     *                  *  ----> Lower Structure
//     * *              * *
//     * * *          * * *
//     * * * *      * * * *
//     * * * * *  * * * * *

int main() {
  int n;
  cin >> n;

  // Upper Structure
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    // Half Inverted Pyramid.
    for (int col = 0; col < n - row; col++) {
      cout << "*";
    }
    // Full Pyramid of spaces.
    for (int col = 0; col < 2 * row + 1; col++) {
      cout << " ";
    }
    // Half Inverted Pyramid.
    for (int col = 0; col < n - row; col++) {
      cout << "*";
    }
    cout << endl;
  }

  // Lower Structure
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    // Half Pyramid.
    for (int col = 0; col < row + 1; col++) {
      cout << "*";
    }
    // Full Pyramid of spaces.
    for (int col = 0; col < 2 * (n - row) - 1; col++) {
      cout << " ";
    }
    // Half Pyramid.
    for (int col = 0; col < row + 1; col++) {
      cout << "*";
    }
    cout << endl;
  }
}