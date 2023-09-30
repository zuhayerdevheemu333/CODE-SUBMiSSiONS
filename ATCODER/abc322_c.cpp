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

// SiMPLE SOLUTiON...
void solution()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        v[x] = x;
    }
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        while (v[j] < i)
            j++;
        CE(v[j] - i);
    }
}

// REVERSE SiMULATiON APPROACH (i DiDN'T UNDERSTAND)...
void solution()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    vector<int> l(n);
    int x = v[m - 1];
    int j = m - 1;
    for (int i = n; i >= 1; i--)
    {
        if (j >= 0 && i == v[j])
        {
            x = i;
            j--;
        }
        l[i - 1] = x - i;
    }
    for (int i = 0; i < n; i++)
        CE(l[i]);
}

int main()
{
    sync();

    solution();

    return 0;
}
