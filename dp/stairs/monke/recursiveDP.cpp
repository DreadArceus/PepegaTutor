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

int cache[MAX_N][3];
int dp(int step, int last)
{
    if (step <= 1)
        return (last == 1 ? 1 : 0);
    if (last == 1)
    {
        if (cache[step - 1][1] == -1)
            cache[step - 1][1] = dp(step - 1, 1);
        if (cache[step - 1][2] == -1)
            cache[step - 1][2] = dp(step - 1, 2);
        return cache[step - 1][1] + cache[step - 1][2];
    }
    if (cache[step - 2][1] == -1)
        cache[step - 2][1] = dp(step - 2, 1);
    if (cache[step - 2][2] == -1)
        cache[step - 2][2] = dp(step - 2, 2);
    return cache[step - 2][1] + cache[step - 2][2];
}

int32_t main()
{
    memset(cache, -1, sizeof(cache));
    int n = 0;
    cin >> n;
    cout << dp(n, 1) + dp(n, 2);
}