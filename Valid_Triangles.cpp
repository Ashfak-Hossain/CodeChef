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
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}