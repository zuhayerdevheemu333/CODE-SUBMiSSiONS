// 55/56 TestCases Passsed...

class Solution {
public:
    int binExpIt(int a, int b, int m)
    {
        a %= m;
        int ans = 1;
        while (b)
        {
            if (b & 1)
                ans = (ans * 1LL * a) % m;
            a = (a * 1LL * a) % m;
            b >>= 1;
        }
        return ans;
    }

    int superPow(int a, vector<int> &b)
    {
        const int MOD = 1337;
        int ans = 0;
        for (int i = 0; i < b.size(); i++)
            ans = (ans * 10 + b[i]) % 1140;
        return binExpIt(a, ans, MOD);
    }
};
