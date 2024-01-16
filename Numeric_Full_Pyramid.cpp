#include <iostream>
using namespace std;

// Numeric Full Pyramid
//        1
//      2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4

int main()
{
    int n;
    cin >> n;

    // Outer Loop - Row Observation
    for (int row = 0; row < n; row++)
    {
        int count = row + 1;
        // Inner Loop - Column Observation
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }

        for (int col = 0; col < 2 * row + 1; col++)
        {

            if (col == 0 || col == 2 * row)
            {
                cout << row + 1 << " ";
            }
            else
            {
                if (col <= (2 * row + 1) / 2)
                {
                    cout << ++count << " ";
                }
                else
                {
                    cout << --count << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}