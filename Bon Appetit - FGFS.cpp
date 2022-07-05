// https://www.codechef.com/problems/FGFS
// https://www.codechef.com/UAGA001/problems/FGFS
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
        ll n, k;
        cin >> n >> k;
        vector <vector<pll>> comp(k + 1);
        for (ll i = 0; i < n; i++) {
            ll arrival, departure, preferred;
            cin >> arrival >> departure >> preferred;
            comp[preferred].pb(mp(departure, arrival));
        }
        ll cus = 0, i = 1;
        while (i <= k) {
            if (comp[i].size() > 0) {
                if (comp[i].size() == 1) {
                    cus++;
                    i++;
                    continue;
                }
                else {
                    sort(comp[i].begin(), comp[i].end());
                    ll last = comp[i][0].first;
                    cus++;
                    ll j = 1;
                    while (j < comp[i].size()) {
                        if (last <= comp[i][j].second) {
                            last = comp[i][j].first;
                            cus++;
                        }
                        j++;
                    }
                }
            }
            i++;
        }
        cout << cus << "\n";
    }

    return 0;
}