// https://www.codechef.com/UAACC01/problems/GOLDTRIP
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
        ll n, q;
        cin >> n;
        vll arr(n), ani(n + 1);
        for(ll i = 0; i < n; i++)
            cin >> arr[i];
        for (ll i = 1; i <= n; i++)
            ani[i] = ani[i - 1] + arr[i - 1];
        cin >> q;
        while (q--) {
            ll q1, q2;
            cin >> q1 >> q2;
            if (q1 <= q2) {
                cout << ani[q2] - ani[q1 - 1] << "\n";
            }
            else {
                cout << ani[n] - ani[q1 - 1] + ani[q2] << "\n";
            }
        }
    }

    return 0;
}