#include <iostream>
using namespace std;

// Full Pyramid
//        *
//       * *
//      * * *
//     * * * *
//    * * * * *

int main() {
  int n;
  cin >> n;
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    // This loop is for the spaces.
    for (int col = 0; col < n - row - 1; col++) {
      cout << " ";
    }
    // This loop is for the stars.
    for (int col = 0; col < row + 1; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}