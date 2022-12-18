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
        int sum = 0;
        while (n != 0)
        {
            int r = n % 10;
            sum += r;
            n /= 10;
        }

        cout << sum << endl;
    }

    return 0;
}