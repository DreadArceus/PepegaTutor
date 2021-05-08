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

int cache[MAX_N];
int dp(int n)
{
    if (n <= 2)
        return 1;
    if (cache[n - 1] == -1)
        cache[n - 1] = dp(n - 1);
    if (cache[n - 2] == -1)
        cache[n - 2] = dp(n - 2);
    return cache[n - 1] + cache[n - 2];
}

int32_t main()
{
    memset(cache, -1, sizeof(cache));
    int n = 0;
    cin >> n;
    if (n >= MAX_N)
        cout << -1;
    else
        cout << dp(n);
}