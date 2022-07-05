// https://www.codechef.com/problems/FRGTNLNG
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
        ll n, k;
        cin >> n >> k;
        string temp;
        vector <string> dic;
        set <string> phr;
        for (ll i = 0; i < n; i++) {
            cin >> temp;
            dic.pb(temp);
        }
        for (ll i = 0; i < k; i++) {
            ll l;
            cin >> l;
            for (ll j = 0; j < l; j++) {
                cin >> temp;
                phr.insert(temp);
            }
        }
        for (ll i = 0; i < n; i++) {
            if (phr.find(dic[i]) != phr.end())
                cout << "YES ";
            else
                cout << "NO ";
        }
        cout << "\n";
    }

    return 0;
}