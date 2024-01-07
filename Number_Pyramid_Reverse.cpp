#include <iostream>
using namespace std;

// Number Pyramid Reverse
//    1 2 3 4 5 6 7 8 9
//      1 2 3 4 5 6 7
//        1 2 3 4 5
//          1 2 3
//            1

int main() {
  int n;
  cin >> n;

  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < row; col++) {
      cout << "  ";
    }
    // Number Pattern
    for (int col = 0; col < 2 * (n - row) - 1; col++) {
      cout << col + 1 << " ";
    }

    cout << endl;
  }
}