#include <iostream>
using namespace std;

// Inverted Half Pyramid
//    * * * * *
//    * * * *
//    * * *
//    * *
//    *

int main() {
  int n;
  cin >> n;

  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < n - row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}