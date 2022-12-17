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
        int discountPercentage, price = 100;
        cin >> discountPercentage;

        int discount = price * discountPercentage / 100;

        cout << price - discount << endl;
    }


    return 0;
}