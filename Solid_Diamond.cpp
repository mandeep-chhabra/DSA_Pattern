#include <iostream>
using namespace std;

// Solid Diamond
//        *
//       * *
//      * * *
//     * * * *
//    * * * * *   ---->  Full Pyramid
//    * * * * *   ---->  Inverted Full Pyramid
//     * * * *
//      * * *
//       * *
//        *

int main()
{
  int n;
  cin >> n;

  // Full Pyramid
  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++)
  {
    // Inner Loop - Column Observation
    // This loop is for spaces.
    for (int col = 0; col < n - row - 1; col++)
    {
      cout << " ";
    }
    // This loop is for stars.
    for (int col = 0; col < row + 1; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  // Inverted Full Pyramid
  //  Outer Loop - Row Observation
  for (int row = 0; row < n; row++)
  {
    // Inner Loop - Column Observation
    // This loop is for spaces.
    for (int col = 0; col < row; col++)
    {
      cout << " ";
    }
    // This loop is for stars.
    for (int col = 0; col < n - row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}