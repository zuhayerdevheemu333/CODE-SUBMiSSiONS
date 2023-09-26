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
    int n;
    cin >> n;
    vector<int> v(n);
    v[0] = 6;
    v[1] = 8;
    v[2] = 12;
    for (int i = 3; i < n; i++)
    {
        v[i] = v[i - 1] + 1;
        while ((v[i] % (v[i - 1] + v[i - 2])) == 0)
            v[i]++;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
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
