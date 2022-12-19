#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int cases;
    cin >> cases;

    while (cases--)
    {
        int d, l, r;
        cin >> d >> l >> r;
        if (d < l)
        {
            cout << "Too Early" << endl;
        }
        else if (d > r)
        {
            cout << "Too Late" << endl;
        }
        else
        {
            cout << "Take second dose now" << endl;
        }
    }

    return 0;
}