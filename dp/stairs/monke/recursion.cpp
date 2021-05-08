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
int32_t mod = 1e9 + 7;

int recur(int step, int last)
{
    if (step <= 1)
        return (last == 1 ? 1 : 0);
    if (last == 1)
        return recur(step - 1, 1) + recur(step - 1, 2);
    if (last == 2)
        return recur(step - 2, 1) + recur(step - 2, 2);
}

int32_t main()
{
    int n = 0;
    cin >> n;
    cout << recur(n, 1) + recur(n, 2);
}