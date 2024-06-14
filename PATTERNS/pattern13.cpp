#include<iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int start = 1;
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << start;
            start++;
            col++;
        }
        // for stars
        int star = row - 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        int star2 = row - 1;
        while (star2)
        {
            cout << "*";
            star2 = star2 - 1;
        }
        int count = n - row + 1;
        while (count)
        {
            cout << count;
            count = count - 1;
        }

        cout << endl;
        row = row + 1;
    }
}