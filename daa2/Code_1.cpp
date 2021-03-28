#include<bits/stdc++.h>
using namespace std;

//state =1 (increasing) , = -1(decreasing) = 0(neutral)
int solve(vector <int> &v,int n, int prev, int state)
{
    if (n == 0)return 0;

    if (state < 0)
    {
        int a, b; a = b = INT_MIN;
        a = solve(v,n - 1, prev, state);
        if (v[n - 1] > prev)
            b = 1 + solve(v,n - 1, v[n - 1], 1);

        return max(a, b);
    }
    else if (state > 0)
    {
        int a, b; a = b = INT_MIN;
        a = solve(v,n - 1, prev, state);
        if (v[n - 1] < prev)
            b = 1 + solve(v,n - 1, v[n - 1], -1);

        return max(a, b);
    }
    else
    {
        int a, b, c; a = b = c = INT_MIN;
        a = solve(v,n - 1, prev, state);
        b = 1 + solve(v,n - 1, v[n - 1], -1);
        c = 1 + solve(v,n - 1, v[n - 1], 1);

        return max(a, max(b, c));
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = solve(v,n, -1, 0);
    cout << ans << "\n";
    return 0;
}