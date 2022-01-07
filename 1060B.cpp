#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a, b, ans = 0;
    ll tmp = n, digits = 0;
    while (tmp > 0)
    {
        digits++;
        tmp /= 10;
    }
    if (digits >= 3)
    {
        a = 1;
        if (n / pow(10, digits - 1) == 1)
        {
            ll x = n / pow(10, digits - 2);
            for (int i = 2; i < digits; i++)
                a = a * 10 + 9;
            a += pow(10, digits - 2) * ((x / 2) - 1);
            b = n - a;
        }
        else
        {
            ll x = n / pow(10, digits - 1);
            for (int i = 1; i < digits; i++)
                a = a * 10 + 9;
            a += pow(10, digits - 1) * ((x / 2) - 1);
            b = n - a;
        }
        while (a > 0)
        {
            ans += a % 10;
            a /= 10;
        }
        while (b > 0)
        {
            ans += b % 10;
            b /= 10;
        }
    }
    else
    {
        if (n != 0)
        {
            a = (n / 2) + 1;
            if (n % 2 == 0 && n % 10 != 0)
                a = n / 2;
            b = n - a;
            while (a > 0)
            {
                ans += a % 10;
                a /= 10;
            }
            while (b > 0)
            {
                ans += b % 10;
                b /= 10;
            }
        }
    }
    cout << ans;
    return 0;
}
