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
    int n, m;
    cin >> n >> m;
    str s, t;
    cin >> s >> t;
    if (s == t)
        C(0);
    else if (t.find(s) == 0)
    {
        if (t.rfind(s) == m - n)
            C(0);
        else
            C(1);
    }
    else if (t.rfind(s) == m - n)
        C(2);
    else
        C(3);
}

int main()
{
    sync();

    solution();

    return 0;
}
