#include <iostream>
using namespace std;

// Half Pyramid Pattern
//     *
//     * *
//     * * *
//     * * * *
//     * * * * *

int main() {
  int n;
  cin >> n;
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < row + 1; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}