#include <iostream>
using namespace std;
int main()
{
    // Star Pattern
    //     ****
    //     ****
    //     ****
    //     ****

    int n;
    cin >> n;

    // Outer Loop - Row Observation
    for (int row = 0; row < n; row = row + 1)
    {
        // Inner Loop - Column Observation
        for (int col = 0; col < n; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}