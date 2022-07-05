// https://www.codechef.com/START2C/problems/COLGLF5
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define range(a,b)  substr(a,b-a+1)
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vll f(n), c(m);
        for (ll i = 0; i < n; i++)
            cin >> f[i];
        for (ll i = 0; i < m; i++)
            cin >> c[i];
        ll co = 0;
        ll i = 0, j = 0;
        bool flag = true;
        while (i < n && j < m) {
            if (flag) {
                if (f[i] < c[j]) {
                    while (i < n && f[i] < c[j]) {
                        i++;
                    }
                    if (j < m)
                        co++;
                    flag = false;
                }
                else {
                    co++;
                    while (j < m && f[i] > c[j]) {
                        j++;
                    }
                    if (i < n)
                        co++;
                    flag = true;
                }
            }
            else {
                if (f[i] < c[j]) {
                    co++;
                    while (i < n && f[i] < c[j]) {
                        i++;
                    }
                    if (j < m)
                        co++;
                    flag = false;
                }
                else {
                    while (j < m && f[i] > c[j]) {
                        j++;
                    }
                    if (i < n)
                        co++;
                    flag = true;
                }
            }
        }
        if (i == n) {
            if (flag)
                co++;
            j = m;
        }
        else {
            if (!flag)
                co++;
            i = n;
        }
        // cout << i << " " << j << " " << co << "\n";
        if (i == n && j == m)
            cout << co << "\n";
    }

    return 0;
}