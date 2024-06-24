#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int64_t x, y, z, k;
    cin >> x >> y >> z >> k;

    if (x * y * z < k)
    {
        cout << 0 << endl;
        return;
    }

    if (x * y * z == k)
    {
        cout << 1 << endl;
        return;
    }

    int64_t res = 0;
    for (int a = 1; a <= x; a++)
    {
        for (int b = 1; b <= y; b++)
        {
            int64_t c = (int64_t)(k / (a * b));
            if (c <= z && k % (a * b) == 0)
            {
                int64_t calc = (int64_t)(x - a + 1) * (y - b + 1) * (z - c + 1);

                res = max(res, calc);
            }
        }
    }

    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
        solve();

    return 0;
}