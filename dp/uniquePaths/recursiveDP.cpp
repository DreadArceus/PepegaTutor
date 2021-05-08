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
#define MAX_M 100
#define MAX_N 100
int32_t mod = 1e9 + 7;

int cache[MAX_M][MAX_N];
int dp(int m, int n)
{
    if (m == 0 || n == 0)
        return 1;
    if (cache[m][n - 1] == -1)
        cache[m][n - 1] = dp(m, n - 1);
    if (cache[m - 1][n] == -1)
        cache[m - 1][n] = dp(m - 1, n);
    return cache[m][n - 1] + cache[m - 1][n];
}

int32_t main()
{
    memset(cache, -1, sizeof(cache));
    int n = 0, m = 0;
    cin >> n >> m;
    cout << dp(m - 1, n - 1);
}