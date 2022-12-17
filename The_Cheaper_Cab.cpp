#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int sum(int a, int b)
{
    return a + b;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int cases;
    cin >> cases;

    while (cases--)
    {

        int X, Y;
        cin >> X >> Y;

        if (X == Y)
            cout << "ANY" << endl;
        else if (X < Y)
            cout << "FIRST" << endl;
        else
            cout << "SECOND" << endl;
    }

    return 0;
}