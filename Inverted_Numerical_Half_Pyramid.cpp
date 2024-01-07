#include <iostream>
using namespace std;

// Inverted Numeric Half Pyramid
//    1 2 3 4 5
//    1 2 3 4
//    1 2 3
//    1 2
//    1

int main() {
  int n;
  cin >> n;

  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < n - row; col++) {
      cout << col + 1 << " ";
    }
    cout << endl;
  }
}
