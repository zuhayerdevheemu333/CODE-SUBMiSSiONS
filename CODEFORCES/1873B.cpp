#include <bits/stdc++.h>
using namespace std;

#define ZDH ios_base
#define ll long long
#define db double
#define str string
#define pb push_back
#define pf push_front
#define MIN INT_MIN
#define MAX INT_MAX
#define sz size()
#define C(X) cout << X << endl
#define all(exe) exe.begin(), exe.end()
#define f(exe) for (int i = 0; i < exe; i++)

void sync()
{
    ZDH::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

void solution()
{
    ll x;
    cin >> x;
    vector<ll> v(x);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    ll min = *min_element(v.begin(), v.end());
    ll prod = 1;
    ll tmp;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == min)
            tmp = i;
    }
    v[tmp] = min + 1;
    for (int i = 0; i < v.size(); i++)
        prod = prod * v[i];
    cout << prod << endl;
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
