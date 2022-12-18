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
        int i;
        cin >> i;

        int count = 0;
        for (int j = i; j > 0;)
        {
            if (j % 10 == 4)
            {
                count = count + 1;
            }
            j = j / 10;
        }
        cout << count << endl;
    }

    return 0;
}