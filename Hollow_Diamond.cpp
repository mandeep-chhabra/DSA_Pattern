#include <iostream>
using namespace std;

// Solid Diamond
//        *
//       * *
//      *   *
//     *     *
//    *       *   ---->  Hollow Full Pyramid
//    *       *   ---->  Hollow Inverted Full Pyramid
//     *     *
//      *   *
//       * *
//        *

int main() {
  int n;
  cin >> n;

  // Hollow Full Pyramid
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    // This loop is for spaces.
    for (int col = 0; col < n - row - 1; col++) {
      cout << " ";
    }
    // This loop is for pyramid structure.
    for (int col = 0; col < row + 1; col++) {
      if (row == 0 || col == 0 || col == row) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  // Hollow Inverted Full Pyramid
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    // This loop is for spaces.
    for (int col = 0; col < row; col++) {
      cout << " ";
    }
    // This loop is for inverted pyramid structure.
    for (int col = 0; col < n - row; col++) {
      if (row == n - 1 || col == 0 || col == n - row - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}