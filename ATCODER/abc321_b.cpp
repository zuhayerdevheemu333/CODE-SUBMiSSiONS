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
    int n, x;
    cin >> n >> x;
    int o = n - 1;
    vector<int> v(o);
    for (int i = 0; i < o; i++)
        cin >> v[i];
    sort(all(v));
    int minV = v[0];
    int maxV = v.back();
    int sum = 0;
    for (int i = 1; i < o - 1; i++)
        sum = sum + v[i];
    int ans = x - sum;
    if (ans > maxV)
        cout << -1;
    else if (ans <= minV)
        cout << 0;
    else
        cout << ans;
}

int main()
{
    sync();

    solution();

    return 0;
}
