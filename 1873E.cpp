#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (auto &aux : a)
        cin >> aux;

    ll h = 0;

    ll l = 0, r = *max_element(a.begin(), a.end()) + x;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        ll total = 0;
        for (ll i = 0; i < n; i++)
        {
            total += max(m - a[i], 0LL);
        }
        if (total <= x)
        {
            h = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }

    cout << h << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}