// https://www.codechef.com/problems/LEMUSIC
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
    //remove this piece of code when this has to be submitted in kickstart
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll n, a, b, ans = 0, temp = 0;
        cin >> n;
        vector <pair<ll, ll>> arr;
        for (ll i = 0; i < n; i++) {
            cin >> a >> b;
            arr.pb(mp(a, b));
        }
        sort(arr.begin(), arr.end());
        map <ll, ll> chk;
        vll aw;
        for (ll i = 0; i < n; i++) {
            if (chk.find(arr[i].first) == chk.end()) {
                chk.insert({arr[i].first, 0});
                aw.pb(arr[i].second);
            }
            else 
                temp += arr[i].second;
        }
        sort(aw.begin(), aw.end());
        for (ll i = 0; i < aw.size(); i++)
            ans += (i + 1) * aw[i];
        ans += temp * chk.size();
        cout << (ll)ans << "\n";
    }

    return 0;
}