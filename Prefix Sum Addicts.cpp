/*
Question Link : https://codeforces.com/problemset/problem/1738/B
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define vi vector<ll>
#define mod 1000000007
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl '\n'
#define sortt(v) sort(v.begin(), v.end())
#define rsortt(v) sort(v.rbegin(), v.rend());
#define c(x) cout << x << " "
#define p(x) cout << x << endl
#define all(v) v.begin(), v.end()

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> s(k);
    for (int i = 0; i < k; i++)
    {
        cin >> s[i];
    }
    if (k == 1)
    {
        YES;
    }
    else
    {
        vector<ll> v(n);
        ll j = n - 1;
        for (int i = k - 1; i >= 1; i--)
        {
            v[j] = s[i] - s[i - 1];
            j--;
        }
        while (j >= 0)
        {
            v[j] = v[j + 1];
            s[0] -= v[j];
            j--;
        }
        v[0] += s[0];
        if (is_sorted(all(v)))
        {
            YES;
        }
        else
        {
            NO;
        }
    }
}

int main()
{
    FIO;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll tomato = 1;
    cin >> tomato;
    while (tomato--)
    {
        solve();
    }
    return 0;
}