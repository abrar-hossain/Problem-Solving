#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long int a[4];

        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (((a[0] * a[0]) + (a[1] * a[1])) == (a[2] * a[2]))
            cout << "Case " << i << ": yes" << '\n';
        else
            cout << "Case " << i << ": no" << '\n';
    }
    return 0;
}