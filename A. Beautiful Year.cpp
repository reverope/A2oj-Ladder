#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdio.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define pii pair<int, int>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define sethr(n) ar[n] = {0}
#define get(a) cin >> a
#define getn(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define show(a, n)              \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " ";    \
    cout << endl;
#define gcd(a, b) __gcd(a, b)
#define inf 1e18
#define all(v) v.begin(), v.end()
#define fl(i, a, b) for (int i = a; i < b; i++)
#define rfl(i, a, b) for (int i = a; i > b; i--)
#define fastaf ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define mod 4294967296

bool hasDuplicate(int x)
{

    int ar[10] = {0};
    while (x != 0)
    {
        ar[x % 10]++;
        x = x / 10;
    }
    for (int i = 0; i < 10; i++)
        if (ar[i] > 1)
            return false;

    return true;
}

int main()
{
    fastaf;
    int y;
    get(y);
    int i = y + 1;

    while (hasDuplicate(i) == false)
        i++;

    cout << i;

    return 0;
}