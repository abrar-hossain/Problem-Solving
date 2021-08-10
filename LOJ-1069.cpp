#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, mypos, lift;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &mypos, &lift);
        int result = abs(mypos - lift) * 4 + mypos * 4 + 19;
        printf("Case %d: %d\n", i, result);
    }
}