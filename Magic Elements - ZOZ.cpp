// https://www.codechef.com/UAACC01/problems/ZOZ
// https://www.codechef.com/problems/ZOZ
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
        ll n, k, sum = 0, ans = 0;
        cin >> n >> k;
        vll arr(n), temp(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        for (ll i = 0; i < n; i++) {
            temp[i] = sum - arr[i];
            if (k + arr[i] > temp[i])
                ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}