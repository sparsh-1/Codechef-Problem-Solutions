// https://www.codechef.com/UAACC01/problems/TRACE
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
        vector <vll> arr;
        vll temp(n);
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                cin >> temp[j];
            }
            arr.pb(temp);
        }
        ll i = 0, j = n - 1, count = 0;
        ll max_ans = arr[i][j];
        while (count <= (n - 1)) {
            ll i = 0, j = n - count - 1, ans = 0;
            while (j < n) {
                ans += arr[i++][j++];
            }
            if (ans > max_ans)
                max_ans = ans;
            count++;
        }
        count = 0;
        while (count < (n - 1)) {
            ll i = n - count - 1, j = 0, ans = 0;
            while (i < n) {
                ans += arr[i++][j++];
            } 
            if (ans > max_ans)
                max_ans = ans;
            count++;
        }
        cout << max_ans << "\n";
    }

    return 0;
}