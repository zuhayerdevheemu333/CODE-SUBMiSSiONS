#include <bits/stdc++.h>
using namespace std;

#define ZDH                     ios_base
#define ll                      long long
#define db                      double
#define str                     string
#define pb                      push_back
#define pf                      push_front
#define MIN                     INT_MIN
#define MAX                     INT_MAX
#define sz                      size()
#define C(X)                    cout << X << endl
#define all(exe)                exe.begin(), exe.end()
#define f(exe)                  for (int i = 0; i < exe; i++)

void sync()
{
    ZDH::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

void solution()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll minimumSum = ((k * (k + 1)) / 2);
    ll maximumSum = ((k * ((2 * n - k) + 1)) / 2);
    cout << (minimumSum <= x && x <= maximumSum ? "YES" : "NO") << endl;
}

int main()
{
    sync();
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
