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
    str s;
    cin >> s;
    int cnt = 0;
    if (s.size() == 1)
    {
        cout << "Yes";
        return;
    }
    else
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] > s[i + 1])
                cnt++;
        }
    }
    if (s.size() - 1 == cnt)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    sync();

    solution();

    return 0;
}
