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

        int number1, number2, condition;
        cin >> number1 >> number2;

        condition = number1 + 200;

        if (condition >= number2 && number2 >= number1) // condition applied
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}