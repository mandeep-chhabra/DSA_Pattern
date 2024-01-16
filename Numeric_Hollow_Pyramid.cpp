#include <iostream>
using namespace std;

// Numeric Hollow Pyramid
//      1
//     1 2
//    1   3
//   1     4
//  1 2 3 4 5

int main()
{
    int n;
    cin >> n;

    // Outer Loop - Row Observation
    for (int row = 0; row < n; row++)
    {
        // Inner Loop - Column Observation
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == n - 1)
            {
                cout << col + 1 << " ";
            }
            else
            {
                if (col == 0 || col == row)
                {
                    cout << col + 1 << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}