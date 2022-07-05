// https://www.codechef.com/UAACC01/problems/LOSTNUM
// https://www.codechef.com/SNUC2020/problems/LOSTNUM
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
        ll n;
        cin >> n;
        vll arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        ll i = 0;
        while (i < n && arr[i] <= 0) 
            i++;
        if (i == n) {
            cout << 1 << "\n";
            continue;
        }
        ll ans = n + 1;
        for (ll j = 0; j < n; j++, i++) {
            if (i < n && j + 1 != arr[i]) {
                ans = j + 1;
                break;
            }
            if (i == n)
                break;
        }
        if (i == n)
            if (arr[n - 1] == n)
                cout << n + 1 << "\n";
            else
                cout << arr[n - 1] + 1 << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}