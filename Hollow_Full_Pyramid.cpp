#include <iostream>
using namespace std;

// Hollow Full Pyramid
//        *
//       * *
//      *   *
//     *     *
//    * * * * *

int main() {
  int n;
  cin >> n;

  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation

    // This loop is for outer spaces.
    for (int col = 0; col < (n - row - 1); col++) {
      cout << " ";
    }
    
    // This loop is for pyramid structure.
    for (int col = 0; col < row + 1; col++) {
      if (row == 0 || row == n - 1) {
        cout << "* ";
      } else {
        if (col == 0 || col == row) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
    }
    cout << endl;
  }
}