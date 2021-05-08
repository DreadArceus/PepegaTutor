#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
#define int long long
#define pii pair<int, int>
#define MAX_N 93
int32_t mod = 1e9 + 7;

int32_t main()
{
    int n = 0;
    cin >> n;
    if (n >= MAX_N)
    {
        cout << -1;
        return 0;
    }
    if (n <= 2)
    {
        cout << 1;
        return 0;
    }

    int dp[n + 1];

    dp[1] = dp[2] = 1;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    cout << dp[n];
}