#include <iostream>
using namespace std;

int main() {
  // Hollow Rectangle Pattern
  //     *****
  //     *   *
  //     *****

  int rowCount, colCount;
  cin >> rowCount >> colCount;

  // Outer Loop - Row Observation
  for (int row = 0; row < rowCount; row++) {
    // Inner Loop - Column Observation
    for (int col = 0; col < colCount; col++) {
      // Condition for checking the the row is solid or hollow.
      if (row == 0 || row == rowCount - 1) {
        cout << "* ";
      } else {
        if (col == 0 || col == colCount - 1) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
    }
    cout << endl;
  }
}
