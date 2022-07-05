// https://www.codechef.com/problems/CSUB
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
        ll n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        vll arr(n);
        if (s[n - 1] == '1') {
            cnt++;
            arr[n - 1] = 1;
        }
        for (ll i = n - 2; i >= 0; i--) {
            if (s[i] == '1') {
                cnt++;
                arr[i] += arr[i + 1] + 1;
            }
            else
                arr[i] = arr[i + 1];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
            if (s[i] == '1')
                ans += arr[i] - 1;
        ans += cnt;
        cout << ans << "\n";
    }

    return 0;
}