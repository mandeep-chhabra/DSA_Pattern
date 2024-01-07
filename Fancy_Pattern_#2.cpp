#include <iostream>
using namespace std;

// Fancy Pattern #2
//    1
//    1*2
//    1*2*3
//    1*2*3*4
//    1*2*3*4
//    1*2*3
//    1*2
//    1

int main() {
  int n;
  cin >> n;

  // Upper Structure
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < row + 1; col++) {
      cout << col + 1;
      if (col != row) {
        cout << "*";
      }
    }
    cout << endl;
  }

  // Lower Structure
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < n - row; col++) {
      cout << col + 1;
      if (col != n - row - 1) {
        cout << "*";
      }
    }
    cout << endl;
  }
}