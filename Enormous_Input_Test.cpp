#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        int a;
        cin >> a;
        if (a % k == 0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}