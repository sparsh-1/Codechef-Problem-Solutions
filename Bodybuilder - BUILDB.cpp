// https://www.codechef.com/COOK128C/problems/BUILDB
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(), x.end()
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
        ll n, r;
        cin >> n >> r;
        vll a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        ll ans = b[0], temp = 0;
        for (ll i = 0; i < n; i++) {
            temp += b[i];
            if (temp > ans)
                ans = temp;
            if (i != n - 1) {
                ll g = r * (a[i + 1] - a[i]);
                temp = max((ll)0, temp - g);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}