#include <bits/stdc++.h>
using namespace std;

#define error                   ios_base
#define ull                     unsigned long long
#define uin                     unsigned int
#define ll                      long long
#define db                      double
#define str                     string
#define ins                     insert
#define pb                      push_back
#define pf                      push_front
#define fs                      first
#define sc                      second
#define ft                      front()
#define bk                      back()
#define lb                      lower_bound
#define ub                      upper_bound
#define MIN                     INT_MIN
#define MAX                     INT_MAX
#define en                      endl
#define sz                      size()
#define C(X)                    cout << X
#define CE(X)                   cout << X << en
#define gcd(x, y)               __gcd(x, y)
#define all(exe)                exe.begin(), exe.end()
#define f(exe)                  for (int i = 0; i < exe; i++)

void sync()
{
    error::sync_with_stdio(0);
    cin.tie (0), cout.tie (0);
}

void solution()
{
    ll n;
    cin >> n;
    vector<ll> v1(n);
    vector<ll> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    sort(all(v1));
    sort(all(v2));
    ll cost_row = n * v1[0];
    ll cost_col = n * v2[0];
    for (int i = 0; i < n; i++)
    {
        cost_row += v2[i];
        cost_col += v1[i];
    }
    CE(min(cost_row, cost_col));
}

int main()
{
    sync();

    ll t;
    cin >> t;

    while (t--)

        solution();

    return 0;
}
