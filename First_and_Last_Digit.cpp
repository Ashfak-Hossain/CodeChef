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
        int n;
        cin >> n;
        int rem = n % 10;
        while (n > 9)
        {
            n = n / 10;
        }
        cout << n + rem << endl;
    }

    return 0;
}