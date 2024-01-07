#include <iostream>
using namespace std;

// Inverted Full Pyramid
//    * * * * *
//     * * * *
//      * * *
//       * *
//        *

int main() {
  int n;
  cin >> n;

  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    //  This loop if for spaces.
    for (int col = 0; col < row; col++) {
      cout << " ";
    }
    // This loop is for stars.
    for (int col = 0; col < n - row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}