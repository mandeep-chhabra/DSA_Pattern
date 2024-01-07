#include <iostream>
using namespace std;

// Numeric Half Pyramid
//    1
//    1 2
//    1 2 3
//    1 2 3 4
//    1 2 3 4 5

int main() {
  int n;
  cin >> n;
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observatiom
    for (int col = 0; col < row + 1; col++) {
      cout << col + 1 << " ";
    }
    cout << endl;
  }
}