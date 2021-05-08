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
#define MAX_N 46
int32_t mod = 1e9 + 7;

int32_t main()
{
    int n = 0;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    int dp[n + 1][3];

    dp[0][1] = dp[1][1] = 1;
    dp[0][2] = dp[1][2] = 0;

    for (int i = 2; i <= n; i++)
    {
        dp[i][1] = dp[i - 1][1] + dp[i - 1][2];
        dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
    }

    cout << dp[n][1] + dp[n][2];
}