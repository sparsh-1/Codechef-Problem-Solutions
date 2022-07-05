// https://www.codechef.com/problems/HW2C
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

    ll n, temp1, temp2;
    cin >> n;
    vector <pll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        a.pb(mp(temp1, temp2));
    }
    sort (a.begin(), a.end(), greater<pll>());
    ll ans = a[0].first;
    for (ll i = 0; i < n; i++) {
        bool flag = true;
        for (ll j = i + 1; j < n; j++) {
            if (a[i].second < a[j].second)
                flag = false;
        }
        if (flag)
            ans = a[i].second;
        break;
    }
    cout << ans << "\n";
    return 0;
}