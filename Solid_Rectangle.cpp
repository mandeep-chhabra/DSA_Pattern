#include <iostream>
using namespace std;
int main() {
  // Solid Rectangular Pattern
  //     *****
  //     *****
  //     *****

  // Outer Loop - Row Observation
  for (int row = 0; row < 3; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < 5; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}