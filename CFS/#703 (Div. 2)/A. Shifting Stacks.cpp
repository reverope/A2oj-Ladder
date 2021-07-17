#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdio.h>
#include <list>
#include <math.h>
#include <set>
#include <cmath>
#include <iostream>
#include <stdint.h>

using namespace std;
#define ll long long int
#define pll pair<ll, ll>
#define pii pair<int, int>
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define get(a) cin >> a
#define getn(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
#define show(a, n)              \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " ";
#define forab(i, a, b) for (int i = a; i < b; i++)
#define forabr(i, a, b) for (int i = b - 1; i >= a; i--)
#define fora(i, a) for (int i = 0; i < a; i++)
#define forar(i, a) for (int i = a - 1; i >= 0; i--)
#define gcd(a, b) __gcd(a, b)
#define fastaf ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define mod 4294967296
#define inf 1e18

int main()
{
    long long t, n, flag;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        flag = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            if (a[i] > i)
            {
                a[i + 1] += a[i] - i;
                a[i] = i;
            }
        }
        for (long long i = 0; i < n - 1; i++)
        {
            if (a[i] >= a[i + 1])
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
    }

    return 0;
}