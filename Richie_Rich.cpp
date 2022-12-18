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
        int current, need, years, IncreasePerYear;
        cin >> current >> need >> IncreasePerYear;

        cout << (need - current) / IncreasePerYear;
    }

    return 0;
}