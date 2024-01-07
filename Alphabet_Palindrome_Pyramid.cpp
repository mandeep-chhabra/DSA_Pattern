#include <iostream>
using namespace std;

// Alphabet Palindrome Pyramid
//    A
//    A B A
//    A B C B A
//    A B C D C B A
//    A B C D E D C B A

int main()
{
  int n;
  cin >> n;

  // Outer Loop - Row Observation
  for (int row = 0; row < n; row++)
  {
    // Inner Loop - Column Observation

    // Alphabetic
    for (int col = 0; col < row + 1; col++)
    {
      cout << char(65 + col);
    }

    // Reverse
    for (int col = 0; col < row; col++)
    {
      cout << char(65 + (row - col - 1));
    }
    cout << endl;
  }
}