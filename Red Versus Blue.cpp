/*
Question Link :
https://www.youtube.com/watch?v=b76bJ5ZOSJc
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

long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve()
{
    ll n, r, b;
    cin >> n >> r >> b;
    int x = r / (b + 1);
    int y = r % (b + 1);

    while (b--)
    {
        int z = x;
        if (y != 0)
            z++, y--;
        for (int i = 0; i < z; i++)
            cout << 'R';
        cout << 'B';
    }
    if (y != 0)
        x++;
    for (int i = 0; i < x; i++)
        cout << 'R';
    cout << endl;
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